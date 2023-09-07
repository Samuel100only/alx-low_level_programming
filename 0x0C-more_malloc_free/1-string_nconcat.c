#include "main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: string number one
 * @s2: string number two
 * @n: the number of char of s2 to be concate
 * Return: pointer to the concate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int length1 = 0, length2 = 0, y, totlen, x = 0;

	while (s1 && s1[length1])
	{
	length1++;
	}
	while (s1 && s1[length2])
	{
	length2++;
	}

	if (n < length2)
	totlen = (length1 + n + 1);
	else
	totlen = (length1 + length2 + 1);

	p = malloc(sizeof(char) * totlen);
	if (p == NULL)
	{
	return (NULL);
	}

	for (y = 0; y < length1; y++)
	{
	p[y] = s1[y];
	}
	for (x = 0; n < length2 && x < (length1 + n); x++)
	{
	p[y] = s2[x];
	}
	for (x = 0; n >= length2 && x < (length1 + length2); x++)
	{
	p[y] = s2[x];
	}
	p[x] = '\0';

	return (p);
}
