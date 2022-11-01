#include "ft_printf.h"

int	main(void)
{
	unsigned int	j = 1;
	long	int	x;
	int c;
	int c1;
	unsigned long	*k;

	// printf("\nPRINTF ORIGINAL MIN-LONG in POINTER: %p\n", −2147483648);
	// ft_printf("FT_PRINTF ORIGINAL MIN-LONG in POINTER: %p\n\n", −2147483648);
	// c = printf("\n\n > TESTES CHAR: |%c|-|%c|-|%c| \n\n", 'x', 0, 'z');
	// printf("A printf retornou: %i\n\n", c);
	// c = ft_printf("\n\n > TESTES CHAR: |%c|-|%c|-|%c| \n\n", 'x', 0, 'z');
	// printf("A printf retornou: %i\n\n", c);

	k = -2147483648;

	printf("\n\n %x \n\n", 9223372036854775807LL);
	ft_printf("\n\n %x \n\n", 9223372036854775807LL);

	c1 = ft_printf("\n POINTER: %p", &k);
	c = printf("\n POINTER: %p", &k);

	printf("\n Resultados :%i, %i ", c1, c);

	c1 = printf("\n 100 :%i ", 100);
	c = ft_printf("\n 100 :%i ", 100);

	printf("\n Resultados :%i, %i ", c1, c);

	c1 = printf("\n -100 :%i ", -100);
	c = ft_printf("\n -100 :%i ", -100);
	
	printf("\n Resultados :%i, %i ", c1, c);

	c1 = printf("\n MAX :%i ", 2147483647);
	c = ft_printf("\n MAX :%i ", 2147483647);

	printf("\n Resultados :%i, %i ", c1, c);

	c1 = printf("\n MIN :%i ", -2147483648);
	c = ft_printf("\n MIN :%i ", -2147483648);

	printf("\n Resultados :%i, %i ", c1, c);

	// printf("\n\n TESTE UNSIGNED LONG %lu", k);
	// c = printf("\n\n > TESTES ZEROX: |%X| \n", 0);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = printf("> TESTES LONGMAXX: |%X| \n", 2147483647);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = printf("> TESTES LONGMINX: |%X| \n", -2147483648);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = printf("> TESTES ULONGMAXX: |%X| \n", 4294967295);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = printf("> TESTES 5X: |%X| \n", 9223372036854775807LL);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = ft_printf("\n\n > TESTES ZEROX: |%X| \n", 0);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = ft_printf("> TESTES LONGMAXX: |%X| \n", 2147483647);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = ft_printf("> TESTES LONGMINX: |%X| \n", -2147483648);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = ft_printf("> TESTES ULONGMAX4X: |%X| \n", 4294967295);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);
	// c = ft_printf("> TESTES 5X: |%X| \n", 9223372036854775807LL);
	// printf("RESULTADO DO PRINTF: %i\n\n", c);

	printf("\nPRINTF ORIGINAL -->\n");
	c = ft_printf(" > STRING = %s\n > PORCENTAGEM = %%\n > INTEIRO = %i\n > CHAR = %c\n > BASE 10 = %d\n > UNSIGNED BASE 10 = %u\n > PONTEIRO = %p\n > HEX MINUSCULO = %x\n > HEX MAIUSCULO = %X\n", "Hello world!", 123, 'm', 4321, 121, &j, 3718371, 3718371);
	printf("A ft_printf retornou: %i\n\n", c);
	c = printf(" > STRING = %s\n > PORCENTAGEM = %%\n > INTEIRO = %i\n > CHAR = %c\n > BASE 10 = %d\n > UNSIGNED BASE 10 = %u\n > PONTEIRO = %p\n > HEX MINUSCULO = %x\n > HEX MAIUSCULO = %X\n", "Hello world!", 123, 'm', 4321, 121, &j, 3718371, 3718371);
	printf("A printf retornou: %i\n\n", c);
	ft_printf("PRINTF HOMEBREW -->\n");
	c = ft_printf(" > STRING = %s\n > PORCENTAGEM = %%\n > INTEIRO = %i\n > CHAR = %c\n > BASE 10 = %d\n > UNSIGNED BASE 10 = %u\n > PONTEIRO = %p\n > HEX MINUSCULO = %x\n > HEX MAIUSCULO = %X\n", "Hello world!", 123, 'm', 4321, 121, &j, 3718371, 3718371);
	printf("A ft_printf retornou: %i\n\n", c);
	return (0);
}