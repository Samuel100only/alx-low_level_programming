#include "main.h"
/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: the pointer of split string
 */
char **strtow(char *str)
{
	char **p;
	int x = 0, y = 0, z = 0;

	while (str[x])
	{
	if (str[x] == " ")
		{
		continue;
		}
	else
		{
		z++;
		}	
	x++;
	}
	if (z == 0)
	{
	return (NULL);
	}
	p = (char **)malloc(sizeof(char *) * (z + 1));
	if (p == NULL)
	{
	return (NULL);
	}
	return (p);
}
