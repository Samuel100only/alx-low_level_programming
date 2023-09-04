#include "main.h"
/**
 * _strdup - return a pointer to a newly allocated space in memory with string
 * @str: the string
 * Return: the pointer address
 */
char *_strdup(char *str)
{
	char *p;
	int x, y;

	x = 0;
	while (*(str + x) != '\0')
	{
	x++;
	}
	x = x + 1;
	p = malloc(sizeof(char) * x);
	if (str == NULL || p == NULL)
	{
	return (NULL);
	}
	for (y = 0; *(p + y) <= x; y++)
	{
	*(p + y) = *(str + y);
	}
	return (p);
}
