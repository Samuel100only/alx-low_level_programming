#include "main.h"
/**
 * _abs - give the absolute value of int
 * @n: the character to be checked
 * Return: 1 or 0
 */
int _abs(int n)
{
	int y;

	if (n < 0)
	{
	y = n * -1;
	return (y);
	}
	return (n);
}
