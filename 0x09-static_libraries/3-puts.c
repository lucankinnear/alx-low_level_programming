#include "main.h"
/**
 * _puts - prints a string to the std output
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
