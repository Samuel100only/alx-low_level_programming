#include "main.h"
/**
 * create_array - create an array of chars and initialize it with char
 * @size: size of the array
 * @c: the character the array fill by
 * Return: the adress of the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
	return (NULL);
	}
	for (x = 0; x < size; x++)
	{
	*(p + x) = c;
	}
	return (p);
}
