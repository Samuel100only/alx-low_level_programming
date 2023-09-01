#include "main.h"
/**
 * _strcmp - compare two string and return 0 if they are same or else
 * @s1: the string to be compare to
 * @s2: the string to be compare to
 * Return: the value to function
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; *(s1 + x) && *(s2 + x); x++)
	{
	if (*(s1 + x) != *(s2 + x))
		return (*(s1 + x) - *(s2 + x));
	}
	return (0);
}
