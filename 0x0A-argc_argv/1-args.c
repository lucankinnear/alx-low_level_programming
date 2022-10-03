#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Prints the number of arguments.
 *
 * Return: 0
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", (argc - 1));

	return (0);
}
