#include "main.h"
/**
 * print_diagonal - print character from the n number
 * @n: the number of slash
 * Return: 0
 */
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(0);
	}
	_putchar(92);
	_putchar('\n');
	}
	_putchar('\n');
}
