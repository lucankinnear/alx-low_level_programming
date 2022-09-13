#include "main.h"
/**
 * main - entry point
 *
 *Return 0
 */

void print_alphabet_x10(void)

{

int j;
int k = 0;

while (k < 10)
{
	k++;

	for (j = 'a'; j <= 'z'; j++)
	
	{
		_putchar(j);

	}

_putchar('\n');

}

return 0;

}
