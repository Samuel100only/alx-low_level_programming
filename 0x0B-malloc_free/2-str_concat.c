#include "main.h"
/**
 * str_concat - returned pointer should point to a newly allocated memory
 * @s1: the first string
 * @s2: the second string
 * Return: the adress of new pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int x, y, z;

	x = 0;
	while (*(s1 + x))
	{
	x++;
	}
	y = 0;
	while (*(s2 + y))
	{
	y++;
	}
	p = malloc(sizeof(char) * (x + y + 1));
	for (z = 0; z < x && s1 != NULL; z++)
	{
	*(p + z) = *(s1 + z);
	}
	for (; z <= (x + y) && s2 != NULL; z++)
	{
	*(p + z) = *(s2 + (z - x));
	}
	return (p);
}
