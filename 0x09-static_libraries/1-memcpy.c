#include "main.h"
/**
 * _memcpy: copies the memory
 * @dest: the destination
 * @src: source memory
 * 
 * Return: Nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
