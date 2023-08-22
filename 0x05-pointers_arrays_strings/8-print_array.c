#include "main.h"
/**
 * print_array - print the valua of the array a
 * @a: the array variable
 * @n: the number of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", *(a + x));
	if (x < (n - 1))
		{
		printf(", ");
		}
	}
}
