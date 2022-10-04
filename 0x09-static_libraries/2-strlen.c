#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: inout string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
