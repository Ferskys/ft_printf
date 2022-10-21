/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:29:42 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/21 23:34:55 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void		ft_putchar(char c, int *base_len);
void		ft_putstr(char *s, int *base_len);
void		ft_putnbr(int n, int *base_len);
void		ft_putnbr_u(unsigned int n, int *base_len);
void		ft_putnbr_base_u(unsigned int n, char *base, int *len);
void		ft_putnbr_base_ul(unsigned long n, char *base, int *len);
void		ft_putnbr_base(int n, char *base, int *len);
size_t		ft_strlen(char *str);

#endif
