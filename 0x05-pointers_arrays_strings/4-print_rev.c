#include "main.h"
/**
 * print_rev - print the value in reverse order
 * @s: the string variable
 * Return: void
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\n'; x++)
	{}
	for (x; x >= 0; x--)
	{
	_putchar(s[x]);
	}
	_putchar('\n');
}
