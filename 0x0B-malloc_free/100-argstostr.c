#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: first int type argument
 * @av: char type argument
 * Return: the pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int x, z, w = 0;
	int y = 0;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y] != '\0'; y++)
	{
	z++;
	}
	}
	z = z + ac;
	p = malloc(sizeof(char) * (z + 1));
	if (p == NULL)
	{
	return NULL;
	}
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		p[w] = av[x][y];
		w++;
	}
	if (p[w] == '\0')
	{
		p[w++] = '\n';
	}
	}
	return (p);
}
