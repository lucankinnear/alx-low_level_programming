#include <stdio.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: The program prints its name.
 *
 * Return: 0
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argc;
	print("%s\n", argv[0]);

	return (0);

}
