#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
*main - entry point
*@argc - argument count
*@argv - argumetn vector
*
*Return : 0
*/
int main (int argc, char *argv[])

{
	int num, i, j, k;
	int result = 0;

	for (i = 1; i < argc; i++)
{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
}
	for (k = 1; k < argc; k++)
{
	num = atoi(argv[k]);
	result += num;
}
	printf("%d\n","result");
	return (0);
}
