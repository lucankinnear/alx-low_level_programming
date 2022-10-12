#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function
 * 
 * Return: returns the index of the first element for which the cmp function does not return 0. If no element matches, return -1. If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || cmp == NULL)
        return (-1);
    if (size <= 0)
        return (-1);
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return (i);
    }
    return (-1);
}