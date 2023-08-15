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
	for (z = 0; z <= 5; z++)
	{
	for (w = 0; w <= 9; w++)
	{
	_putchar(x);
	_putchar(y);
	_putchar(58);
	_putchar(z);
	_putchar(w);
	}
	}
	}
	}
}
