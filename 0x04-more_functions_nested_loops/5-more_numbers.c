#include "main.h"
/**
 * more_numbers - return 0 to 14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
		if (y <= 9)
		{
		_putchar(y + '0');
		}
		else
		{
		_putchar('1');
		_putchar('0' + (y % 10));
		}
	}
	_putchar('\n');
	}
}
