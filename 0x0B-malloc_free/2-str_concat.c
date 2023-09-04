#include "main.h"
/**
 * str_concat - returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
 * @s1: the first string
 * @s2: the second string
 * Return: the adress of new pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int x, y, z;
	
	if(s1 == NULL || s2 == NULL)
	{
	return (NULL);
	}
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
	p = malloc(sizeof(char) * (x + y));
	for (z = 0; z <= (x + y); z++)
	{
	if (z < x)
	{
	*(p + z) = *(s1 + z);
	}
	else
	{
	*(p + z) = *(s2 + (z - x));
	}
	}
	return (p);
}
