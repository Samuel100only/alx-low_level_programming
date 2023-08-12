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

	for (x = 0; x <= 7; x++)
	{
	for (y = 0; y <= 8; y++)
	{
	for (z = 0; z <= 9; z++)
	{
	if ((x < y) && (y < z))
	{
	putchar(x + 48);
	putchar(y + 48);
	putchar(z + 48);
	if (z < 9 || y < 8 || x < 7)
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
