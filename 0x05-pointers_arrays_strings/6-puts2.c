#include "main.h"
/**
 * puts2 - print every even number char
 * @str: the string variable
 * Return: void
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
	if (str[x] % 2 == 0)
	{
	_putchar(str[x]);
	}
	}
	_putchar('\n');
}
