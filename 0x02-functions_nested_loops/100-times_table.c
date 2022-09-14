#include "main.h"
/**
 * main - entry point
 *
 * Return 0
 */

void _print_values(int);

void print_times_table(int n)

{

if (n <= 15)

{
int i, j;

	for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
{

																				int times = i * j;

																				if (times / 100)
																				_print_values(times);
}
																					else if (times / 10)

{

	if (j > 0)
{
	       	_putchar(' ');

}		_print_values(times);

}
	else

{
	if (j > 0)
{
		_putchar(' ');
		_putchar(' ');
}
		_print_values(times);

}
if (j < n)

{
		_putchar(',');

		_putchar(' ');

}
}
		_putchar('\n');
}
}

}
