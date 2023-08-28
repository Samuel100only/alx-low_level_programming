#include "main.h"
/**
 * _strspn - return the number of bytes of s which consist of byte from accept
 * @s: the variable to checked from
 * @accept: the variable to checked from
 * Return: value of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int z;

	z = 0;
	for (x = 0; (s[x] >= 65 && s[x] <= 90) || (s[x] >= 97 && s[x] <= 122); x++)
	{
	for (y = 0; *(accept + y) != '\0'; y++)
	{
	if (*(s + x) == *(accept + y))
	{
	z++;
	}
	}
	}
	return (z);
}
