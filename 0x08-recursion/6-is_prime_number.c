#include "main.h"
int is_divisible(int n, int m);
/**
 * is_prime_number - call function to check prime num
 * @n: the number
 * Return: the result
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n <= 3)
	{
	return (1);
	}
	return (is_divisible(n, 2));
}
/**
 * is_divisible - function that check the num is divisible
 * @n: the num
 * @m: divisible by
 * Return: 1 or 0
 */
int is_divisible(int n, int m)
{
	if (n % m == 0)
	{
	return (0);
	}
	if (m == n / 2)
	{
	return (1);
	}
	return (is_divisible(n, m + 1));
}
