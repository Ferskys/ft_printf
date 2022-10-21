/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:34:09 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/21 23:34:13 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int *base_len)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar('-', base_len);
		number = -n;
	}
	else
		number = n;
	if (number > 9)
	{
		ft_putnbr(number / 10, base_len);
		number %= 10;
	}
	ft_putchar(number + '0', base_len);
}
