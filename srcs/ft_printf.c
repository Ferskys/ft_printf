/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:12:18 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/27 20:23:38 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	char	*str;

	va_start(ap, format);
	len = 0;
	str = NULL;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			put_format(ap, format, &len, str);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}

static void	put_format(va_list ap, const char *fmt, int *len, char *str)
{
	if (*format == '%')
		*len += ft_putchar('%');
	else if (*format == 'd' || *format == 'i')
		*len += ft_putnbr(va_arg(ap, int), "0123456789");
	else if (*format == 'u')
		*len += ft_putnbr(va_arg(ap, unsigned int), "0123456789");
	else if (*format == 'x')
		*len += ft_putnbr(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (*format == 'X')
		*len += ft_putnbr(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (*format == 'c')
		*len += ft_putchar(va_arg(ap, int));
	else if (*format == 'p')
	{
		*len += ft_putstr("0x");
		*len += ft_address(va_arg(ap, unsigned long long), "0123456789abcdef");
	}
	else if (*format == 's')
	{
		str = va_arg(ap, char *);
		if (!str)
			*len += ft_putstr("(null)");
		else
			*len += ft_putstr(str);
	}
}
