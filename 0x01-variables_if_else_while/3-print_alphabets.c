#include <stdio.h>
/**
 * main - print out the lower and uppercase alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';
	char lower_al = 'A';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	while (lower_al <= 'Z')
	{
	putchar(lower_al);
	lower_al++;
	}
	putchar('\n');
	return (0);
}
