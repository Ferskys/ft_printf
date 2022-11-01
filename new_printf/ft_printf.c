#include "ft_printf.h"

int	ft_putchar(char	c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return(ft_putstr("(null)"));
	while (s[i] != '\0')
		i += ft_putchar(s[i]);
	return(i);
}


int	ft_putnbru(unsigned int n)
{
	int	 ret;

	ret = 0;
	if (n < 10)
	{
		ret += ft_putchar(n + 48);
		return(ret);
	}
	else
	{
		ret += ft_putnbru(n / 10);
		ret += ft_putnbru(n % 10);
	}
	return (ret);
}
int	ft_putnbr(int n)
{
	int	ret;

	ret = 0;
	if (n == -2147483648)
		return(ft_putstr("-2147483648"));
	if (n < 0)
	{
		ret += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		ret += ft_putchar(n + 48);
		return(ret);
	}
	else
	{
		ret += ft_putnbr(n / 10);
		ret += ft_putnbr(n % 10);
	}
	return (ret);
}

int	iszero(unsigned long zero)
{
	int	ret;

	if (zero == 0)
		ret = ft_putchar('0');
	else 
		ret = ft_putstr("80000000");
	return(ret);
}

int	dexs(unsigned long decimalnum)
{
    unsigned long	quotient;
	unsigned long	remainder;
    int		i;
	int		j;
    char	*hexadecimalnum;
 
    quotient = decimalnum;
	i = 0;
	j = 0;
	if (decimalnum == 0)
		return(iszero(decimalnum));
	while (decimalnum != 0 && i++ > -1)
		decimalnum = decimalnum / 16;
	hexadecimalnum = malloc(sizeof(char) * i + 1);
	hexadecimalnum[i--] = '\0';
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[i] = (48 + remainder);
        else
            hexadecimalnum[i] = (87 + remainder);
        quotient = quotient / 16;
		i--;
    }
	j = ft_putstr(hexadecimalnum);
	free(hexadecimalnum);
    return (j);
}

int	dex(unsigned long decimalnum)
{
    unsigned long	quotient;
	unsigned long	remainder;
    int		i;
	int		j;
    char	*hexadecimalnum;
 
    quotient = decimalnum;
	i = 0;
	j = 0;
	if (decimalnum == 0)
		return(iszero(decimalnum));
	while (decimalnum != 0 && i++ > -1)
		decimalnum = decimalnum / 16;
	hexadecimalnum = malloc(sizeof(char) * i + 1);
	hexadecimalnum[i--] = '\0';
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[i] = (48 + remainder);
        else
            hexadecimalnum[i] = (55 + remainder);
        quotient = quotient / 16;
		i--;
    }
	j = ft_putstr(hexadecimalnum);
	free(hexadecimalnum);
    return (j);
}
// int	dex(unsigned long decimalnum)
// {
//     long	quotient;
// 	long	remainder;
//     int		i;
// 	int		j;
//     char	*hexnum;
 
//     quotient = decimalnum;
// 	i = 0;
// 	j = 0;
// 	if (decimalnum == 0 || decimalnum == (unsigned long)(-2147483648))
// 		return(iszero(decimalnum));
// 	while (decimalnum != 0 && i++ > -1)
// 		decimalnum = decimalnum / 16;
// 	hexnum = calloc(sizeof(char) * i + 1, 1);
// 	hexnum[i--] = '\0';
//     while (quotient != 0)
//     {
//         remainder = quotient % 16;
//         if (remainder < 10)
//             hexnum[i] = (48 + remainder);
//         else
//             hexnum[i] = (55 + remainder);
//         quotient = quotient / 16;
// 		i--;
//     }
// 	j = ft_putstr(hexnum + 1);

// 	// GAMBIARRA AQUI
// 	free(hexnum);
//     return (j + 1);

// 	// GAMBIARRA AQUI
// }

int	pointer(unsigned long ptr)
{
	int	ret;

	if (!ptr)
		return(ft_putstr("(nil)"));
	ret = ft_putstr("0x");
	ret += dexs(ptr);
	return (ret);
}

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		ch = ch - 32;
	return (ch);
}

int	search(char format, va_list arg)
{
	int	ret;

	ret = 0;
	if (format == 'i' || format == 'd')
		ret += ft_putnbr(va_arg(arg, int));
	else if (format == 's')
		ret += ft_putstr(va_arg(arg, char *));
	else if (format == '%')
		ret += ft_putchar('%');
	else if (format == 'c')
		ret += ft_putchar(va_arg(arg, unsigned int));
	else if (format == 'u')
		ret += ft_putnbru(va_arg(arg, unsigned int));
	else if (format == 'p')
		ret += pointer(va_arg(arg, unsigned long));
	else if (format == 'X')
		ret += dex(va_arg(arg, unsigned int));
	else if (format == 'x')
		ret += dexs(va_arg(arg, unsigned int));
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	va_start(arg, format);
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ret += search(format[i + 1], arg);
			i += 2;
		}
		else 
		{
			ret += ft_putchar(format[i]);
			i++;
		}
	}
	return (ret);
}
