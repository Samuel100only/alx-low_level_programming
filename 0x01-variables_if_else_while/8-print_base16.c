#include <stdio.h>
/**
 * main - print out all ascii value 
 * Return: 0 (success)
 */
int main(void)
{
	int alp = 0;
	char alphabet = 'a';

	while (alp <= 9)
	{
	putchar(alp + 48);
	alp++;
	}
	while (alphabet <= 'f')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
