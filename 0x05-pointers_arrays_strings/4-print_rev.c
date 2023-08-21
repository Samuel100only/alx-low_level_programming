#include "main.h"
/**
 * print_rev - print the value in reverse order
 * @s: the string variable
 * Return: void
 */
void print_rev(char *s)
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
