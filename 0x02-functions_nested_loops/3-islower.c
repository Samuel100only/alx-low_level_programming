#include "main.h"
/**
 * _islower - if c is lower case return 1 or 0 if c is upper
 * @c: the character to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
