#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: the variable of string of char
 * Return: void
 */
void puts_half(char *str)
{
	int y;
	int z;

	for (y = 0; str[y] != '\0'; y++)
	{}
	if (y % 2 == 0)
	{
	y = y / 2;
	}
	else
	{
	y = (y - 1) / 2;
	}
	for (z = y; str[z] != '\0'; z++)
	{
	_putchar(str[z]);
	}
	_putchar('\n');
}
