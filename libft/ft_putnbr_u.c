/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:31:25 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/21 23:31:36 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_u(unsigned int n, int *base_len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, base_len);
		n %= 10;
	}
	ft_putchar(n + '0', base_len);
}
