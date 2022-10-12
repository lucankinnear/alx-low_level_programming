#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
<<<<<<< HEAD
    unsigned int i;
=======
	int i;

	if (array && size > 0 && action)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
>>>>>>> e206a61bf43b9b9e624c823e1b1e7fafc96cb9e9

