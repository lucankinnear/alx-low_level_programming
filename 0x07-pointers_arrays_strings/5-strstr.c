#include "main.h"
/**
 * _strstr - return the location of the string
 * @haystack: search location
 * @needle: what we looking for
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; 

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return (str1); 
		}
		haystack = str1 + 1;
	}
	return (0);
}
