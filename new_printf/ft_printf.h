#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...);
int	search(char format, va_list arg);
int	ft_toupper(int ch);
int	pointer(unsigned long ptr);
int	dex(unsigned long decimalnum);
int	dexs(unsigned long decimalnum);
int	iszero(unsigned long zero);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char	c);

#endif