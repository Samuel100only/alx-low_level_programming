#include "main.h"
/**
 * print_numbers - return number from 0 - 9 and newline chr
 * Return: 0 is sucess
 */
void print_numbers(void)
{
	int y;

	for (y = 0; y <= 9; y++)
	{
	_putchar(y + '0');
	}
	_putchar('\n');
}
