#include <stdio.h>
/**
 * main - print out all alphabet ,except e and q
 * return 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
	if (alp != 'q' && alp != 'e')
	{
	putchar(alp);
	}
	alp++;
	}
	putchar('\n');
	return (0);
}
