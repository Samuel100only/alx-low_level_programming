#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diagonal in both side
 * @a: the matrix array
 * @size: is the size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	int sum = 0;
	int sum2 = 0;
	int max;

	max = size * size;
	for (x = 0; x < max; x = x + (size + 1))
	{
	sum = sum + *(a + x);
	}
	for (x = (size - 1); x < (max - 1); x = x + (size - 1))
	{
	sum2 = sum2 + *(a + x);
	}
	printf("%d, %d\n", sum, sum2);
}
