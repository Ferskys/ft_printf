/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_ul.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:32:26 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/21 23:32:35 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_ul(unsigned long n, char *base, int *len)
{
	unsigned long	base_len;

	if (check_base(base))
	{
		base_len = 0;
		while (base[base_len])
			base_len++;
		if (n > base_len - 1)
		{
			ft_putnbr_base_ul(n / base_len, base, len);
			n %= base_len;
		}
		ft_putchar(base[n], len);
	}
}
