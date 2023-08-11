#include <stdio.h>
/**
 * main - print out all alphabet ,except e and q
 * Return: 0 (success)
 */
int main(void)
{
	int alp = 0;

	while (alp <= 9)
	{
	putchar(alp + 48);
	alp++;
	}
	putchar('\n');
	return (0);
}
