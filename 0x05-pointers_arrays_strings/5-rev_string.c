#include "main.h"
/**
 * rev_string - print the value in reverse order
 * @s: the string variable
 * Return: void
 */
void rev_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	x = x - 1;
	for (; x >= 0; x--)
	{
	_putchar(s[x]);
	}
	_putchar('\n');
}
