#include "main.h"
/**
 * print_sign - if n is greater than 0 print '+' and return 1
 * @n: the character to be checked
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	return (1);
	_putchar('+');
	}
	else if (n == 0)
	{
	return (0);
	_putchar('0');
	}
	else
	{
	return (-1);
	_putchar('-');
}