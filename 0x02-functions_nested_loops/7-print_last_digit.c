#include "main.h"
/**
 * print_last_digit - prints the last digit of a number c
 * @c: the character to be checked
 * Return: 1 or 0
 */
int print_last_digit(int c)
{
	int y;

	y = c % 10;
	if (y < 0)
	{
	y = y * -1;
	}
	return (y);
}
