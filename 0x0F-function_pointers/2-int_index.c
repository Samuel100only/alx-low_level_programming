#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: the array pointer
 * @size: the size of the array
 * @cmp: the pointer to function
 * Return: the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
	return (-1);
	}
	for (x = 0; x < size; x++)
	{
	cmp(array[x]);
	if (cmp(array[x]) != 0)
	{
	return (x);
	}
	}
	return (-1);
}
