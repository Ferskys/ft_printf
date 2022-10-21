/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:12:23 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/21 23:27:28 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# if defined (__APPLE__)
#  define PTR_NULL "0x0"
# elif __linux__
#  define PTR_NULL "(nil)"
# endif

int		ft_printf(const char *str, ...);

void	print_char(va_list arg, int *arg_len);
void	print_int(va_list arg, int *arg_len);
void	print_uint(va_list arg, int *arg_len);
void	print_hexa(va_list arg, int *arg_len, char c);
void	print_address_hexa(va_list arg, int *arg_len);
void	print_str(va_list arg, int *arg_len);
#endif
