#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: argument
 *
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int i, sum;
	va_list args;

	if (n == 0)
		return (0);

	count = 1;
	sum = 0;
	va_start(args, n);
	for (i = va_arg(args, int); count <= n; i = va_arg(args, int))
	{
		sum += i;
		count++;
	}
	va_end(args);
	return (sum);
}