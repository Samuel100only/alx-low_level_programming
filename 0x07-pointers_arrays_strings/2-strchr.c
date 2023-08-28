#include "main.h"
/**
 * _strchr - return the location or pointer of char c
 * @s: the string variable which c can be found in 
 * @c: the character to be found in s
 * Return: pointer of locatiom
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; *(s + x) != '\0'; x++)
	{
	if (*(s + x) == c)
	{
	return ((s + x));
	}
	}
	return (0);
}
