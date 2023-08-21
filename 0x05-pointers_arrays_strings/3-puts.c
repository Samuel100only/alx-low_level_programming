#include "main.h"
/**
 * _puts - return the s value to stdout
 * @str: the variable to be put in stdout
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
