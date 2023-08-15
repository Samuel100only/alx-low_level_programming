#include "main.h"
/**
 * print_alphabet_x10 - print the lower case alpahbet 10 time
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = 0; y <= 9; y++)
	{
	for (x = 0; x <= 25; x++)
	{
		_putchar(x + 'a');
	}
	_putchar('\n');
	}
}
