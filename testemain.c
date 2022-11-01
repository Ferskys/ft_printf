/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testemain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:37:15 by fsuomins          #+#    #+#             */
/*   Updated: 2022/10/27 23:00:09 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// int main()
// {
//     long decimalnum, quotient, remainder;
//     int i, j = 0;
//     char hexadecimalnum[100];
 
//     printf("Enter decimal number: ");
//     scanf("%ld", &decimalnum);
 
//     quotient = decimalnum;
 
//     while (quotient != 0)
//     {
//         remainder = quotient % 16;
//         if (remainder < 10)
//             hexadecimalnum[j++] = 48 + remainder;
//         else
//             hexadecimalnum[j++] = 55 + remainder;
//         quotient = quotient / 16;
//     }
 
//     // display integer into character
//     for (i = j; i >= 0; i--)
//             printf("%c", hexadecimalnum[i]);
//     return 0;
// }

int	main(void)
{
	unsigned int	j = 1;
	long	int	x;
	int c;

	 x = (unsigned long)&j;


	printf("\nPRINTF ORIGINAL -->\n");
	c = printf(" > STRING = %s\n > PORCENTAGEM = %%\n > INTEIRO = %i\n > CHAR = %c\n > BASE 10 = %d\n > UNSIGNED BASE 10 = %u\n > PONTEIRO = %p\n > Xcaps = %X\n > Xnoncaps = %x\n", "STRING DE TESTE", 123, 'c', 234, 234, &j, 139781203, 109371920);
	printf("A printf retornou: %i\n\n", c);
	ft_printf("PRINTF HOMEBREW -->\n");
	c = ft_printf(" > STRING = %s\n > PORCENTAGEM = %%\n > INTEIRO = %i\n > CHAR = %c\n > BASE 10 = %d\n > UNSIGNED BASE 10 = %u\n > PONTEIRO = %p\n > Xcaps = %X\n > Xnoncaps = %x\n", "STRING DE TESTE", 123, 'c', 234, 234, &j, 139781203, 109371920);
	printf("A ft_printf retornou: %i\n\n", c);
	return (0);
}