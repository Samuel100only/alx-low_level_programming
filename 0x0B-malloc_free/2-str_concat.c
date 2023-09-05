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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
	if (p == NULL)
	{
	return (NULL);
	}
	for (z = 0; z < x; z++)
	{
	*(p + z) = *(s1 + z);
	}
	for (; z <= (x + y); z++)
	{
	*(p + z) = *(s2 + (z - x));
	}
	*(p + z) = '\0';
	return (p);
}
