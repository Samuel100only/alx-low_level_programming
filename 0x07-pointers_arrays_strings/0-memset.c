#include "main.h"
/**
 * _memset - fill the n of the memory area pointed to by s with the b
 * @s: the variable the function put some characters on
 * @b: the value of character that the function put on s
 * @n: the number of character(value of b) put on s
 * Return: adress of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x <= n; x++)
	{
	*(s + x) = b;
	}
	return (s);
}
