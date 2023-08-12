#include <stdio.h>
/**
 * main - print out all alphabet ,except e and q
 * Return: 0 (success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int w;

	for (w = 0; w <= 9; w++)
	{
	for (x = 0; x <= 8; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	for (z = 0; z <= 9; z++)
	{
	putchar(w + 48);
	putchar(x + 48);
	putchar(32);
	putchar(y + 48);
	putchar(z + 48);
	if (w < 9 || x < 8 || y < 9 || z < 9)
	{
	putchar(',');
	putchar(32);
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
