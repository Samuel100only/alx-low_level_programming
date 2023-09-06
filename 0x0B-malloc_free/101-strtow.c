#include "main.h"
/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: the pointer of split string
 */
char **strtow(char *str)
{
	char **p, *tmp;
	int x = 0, y = 0, z = 0, a = 0, b = 0;
	int start, end;

	while (str[x])
	{
	if (str[x] == 32)
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
	z = 0;
	while (*(str + z))
	{
	z++;
	}
	for (y = 0; y <= z; y++)
	{
	if (str[y] == 32 || str[y] == '\0')
		{
			if (b)
			{
			end = y;
			tmp = (char *) malloc(sizeof(char) * (b + 1));
			if (tmp == NULL)
				return (NULL);
			while (start < end)
				*tmp++ = str[start++];
			*tmp = '\0';
			p[a] = tmp - b;
			a++;
			b = 0;
			}
		}
		else if (b++ == 0)
			start = y;
	}
	return (p);
}
