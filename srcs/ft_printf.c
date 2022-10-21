/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:12:18 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/21 23:28:20 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	check_format(char const *str, va_list arg, int index, int *arg_len)
{
	char	c;

	if (str[index] == 'c')
	{
		c = va_arg(arg, int);
		*arg_len += write(1, &c, 1);
	}
	if (str[index] == '%')
		*arg_len += write(1, "%", 1);
	if (str[index] == 'd' || str[index] == 'i')
		print_int(arg, arg_len);
	if (str[index] == 'u')
		print_uint(arg, arg_len);
	if (str[index] == 'x' || str[index] == 'X')
		print_hexa(arg, arg_len, str[index]);
	if (str[index] == 'p')
		print_address_hexa(arg, arg_len);
	if (str[index] == 's')
		print_str(arg, arg_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		*arg_len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	arg_len = &len;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			check_format(format, args, i, arg_len);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

void	print_str(va_list arg, int *arg_len)
{
	char	*str;

	str = va_arg(arg, void *);
	if (str == NULL)
		ft_putstr("(null)", arg_len);
	else
		ft_putstr(str, arg_len);
}
