#include <stdio.h>
/**
 * main - print out all alphabet ,except e and q
 * Return: 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 8; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	putchar(x + 48);
	putchar(y + 48);
	if (y < 9 && x < 8)
	{
	putchar(',');
	putchar(32);
	}
	}
	}
	putchar('\n');
	return (0);
}
