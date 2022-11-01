/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:58:57 by fsuomins          #+#    #+#             */
/*   Updated: 2022/11/02 00:23:07 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dexs(unsigned long decimalnum, int i, int j)
{
	unsigned long	quotient;
	unsigned long	remainder;
	char			*hexadecimalnum;

	quotient = decimalnum;
	if (decimalnum == 0)
		return (iszero(decimalnum));
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

int	dex(unsigned long decimalnum, int i, int j)
{
	unsigned long	quotient;
	unsigned long	remainder;
	char			*hexadecimalnum;

	quotient = decimalnum;
	if (decimalnum == 0)
		return (iszero(decimalnum));
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

int	pointer(unsigned long ptr)
{
	int	ret;

	if (!ptr)
		return (ft_putstr("(nil)"));
	ret = ft_putstr("0x");
	ret += dexs(ptr, 0, 0);
	return (ret);
}
