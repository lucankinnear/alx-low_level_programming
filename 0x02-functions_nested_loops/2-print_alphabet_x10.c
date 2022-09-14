#include "main.h"
/**
 *main - entry point
 *
 * Return 0
 */

void print_alphabet_x10(void)

{

int j = 0;



while (j < 10)
{
	char abc = 'a';

	while (j <= 'z')
{
		_putchar(abc);
	
		abc++;
}
}
		_putchar('\n');

		j++;

}
