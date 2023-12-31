#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a given array
 * @size: size of the array
 * @action: pointer to function we need to use
 * @array: the array pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
	return;
	}
	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
