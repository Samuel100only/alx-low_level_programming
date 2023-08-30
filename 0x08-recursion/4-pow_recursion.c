#include "main.h"
/**
 * _pow_recursion - return the power of x to y
 * @x: the power
 * @y: power to
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	else if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
