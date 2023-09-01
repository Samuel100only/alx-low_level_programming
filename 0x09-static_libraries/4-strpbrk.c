#include "main.h"
/**
 * _strpbrk - return the pointer of first match between s and accept
 * @s: to be compared and sent the match char pointer
 * @accept: to be compared with s
 * Return: the address of first match
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
	for (y = 0; *(accept + y) != '\0'; y++)
	{
	if (*(accept + y) == *(s + x))
	{
	return (s + x);
	}
	}
	}
	return ('\0');
}
