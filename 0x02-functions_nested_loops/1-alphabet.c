#include "main.h"
/**
 * print_alphabet - print all lower case alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 0; x <= 25; x++)
	{
		_putchar(x + 'a');
	}
	_putchar('\n');
}
