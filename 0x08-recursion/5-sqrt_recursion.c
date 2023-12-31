#include "main.h"
int _sqrt(int n, int m);
/**
 * _sqrt_recursion -  call function to get square root of a number
 * @n: the number
 * Return: the value
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - return the square root
 * @n: the number
 * @m: increament result
 * Return: the value
 */
int _sqrt(int n, int m)
{
	int div = m * m;

	if (n < div)
	{
	return (-1);
	}
	if (n == div)
	{
	return (m);
	}
	return (_sqrt(n, m + 1));
}
