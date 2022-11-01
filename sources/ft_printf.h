/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:12:23 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/27 23:03:26 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...) __attribute__((format(printf, 1, 2)));

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long long nbr, char *base);
int		ft_address(unsigned long long nbr, char *base);

#endif