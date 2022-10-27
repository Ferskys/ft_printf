/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:20:27 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/27 20:04:21 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(unsigned long long nbr, char *base)
{
	unsigned long long	base_digits;
	int					len;

	len = 0;
	base_digits = 0;
	while (base[base_digits])
		base_digits++;
	if (nbr < base_digits)
		len += ft_putchar(base[nbr]);
	else
	{
		len += ft_putnbr(nbr / base_digits, base);
		len += ft_putnbr(nbr % base_digits, base);
	}
	return (len);
}

int	ft_putnbr(long long nbr, char *base)
{
	long long	base_digits;
	int			len;

	len = 0;
	base_digits = 0;
	while (base[base_digits])
		base_digits++;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < base_digits)
		len += ft_putchar(base[nbr]);
	else
	{
		len += ft_putnbr(nbr / base_digits, base);
		len += ft_putnbr(nbr % base_digits, base);
	}
	return (len);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (write(1, s, len));
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
