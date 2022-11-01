/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:04:32 by fsuomins          #+#    #+#             */
/*   Updated: 2022/11/02 00:27:13 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_putnbru(unsigned int n);
int	ft_printf(const char *format, ...);
int	search(char format, va_list arg);
int	ft_toupper(int ch);
int	pointer(unsigned long ptr);
int	dex(unsigned long decimalnum, int i, int j);
int	dexs(unsigned long decimalnum, int i, int j);
int	iszero(unsigned long zero);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);

#endif