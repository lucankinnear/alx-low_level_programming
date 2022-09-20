#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string
 * @dest: Buffer to copy the string to
 * @src: source string
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
