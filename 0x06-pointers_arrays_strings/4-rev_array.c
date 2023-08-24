#include "main.h"
/**
 * reverse_array - return reverse order of input array
 * @a: the input array
 * @n: the number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b[n];
	int x;
	int y;

	y = n - 1;
	for (x = 0; x < n; x++)
	{
	b[x] = *(a + y);
	y--;
	}
	for (x = 0; x < n; x++)
	{
	*(a + x) = b[x];
	}
}
