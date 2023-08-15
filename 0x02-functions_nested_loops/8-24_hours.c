#include "main.h"
/**
 * jack_bauer - prints all commbination of 23:59 from 00:00
 * Return: 1 or 0
 */
void jack_bauer(void)
{
	int x, y, z, w;

	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y <= 3; y++)
	{
	if (( x <= 1 && y <= 9) || (x <= 2 && y <= 3))
	{
	for (z = 0; z <= 5; z++)
	{
	for (w = 0; w <= 9; w++)
	{
	_putchar(x + '0');
	_putchar(y + '0');
	_putchar(58);
	_putchar(z + '0');
	_putchar(w + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
