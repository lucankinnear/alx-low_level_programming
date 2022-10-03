#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concats the arguments
 * @ac: arguments
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[k] = av[i][j];
		k++;
	}
	if (str[k] == '\0')
	{
		str[k++] = '\n';
	}
	}
	return (str);
}
