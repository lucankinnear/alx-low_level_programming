#include "main.h"
/**
 * _strpbrk -searches a string
 * @s: string
 * @accept: reference string
 *
 * Return: 0
 */
char *strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')

	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
