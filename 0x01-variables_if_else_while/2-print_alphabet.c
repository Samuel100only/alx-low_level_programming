#include <stdio.h>
/**
 * main - print out the lower alphabet
 * return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
