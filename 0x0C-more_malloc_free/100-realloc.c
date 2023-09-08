#include "main.h"
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: the former allocated memory with the old size
 * @old_size: size of ptr
 * @new_size: the size of newly allocated memory
 * Return: the pointer address 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *Old_ptr;
	unsigned int x;
	
	if (ptr == NULL)
	{
	ptr = malloc(new_size);
	return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	if (new_size == old_size)
	{
	return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
	return (NULL);
	}
	Old_ptr = ptr;
	for (x = 0; x < old_size; x++)
	{
	p[x] = Old_ptr[x];
	}
	free(ptr);
	return (p);
}
