#include "main.h"
/**
 * main - call function print_alphabet
 * Return: 0
 * print_alphabet - print all lower case alphabet
 */

void print_alphabet(void)
{
	int x;

	for (x = 0; x <= 26; x++)
	{
		_putchar(x + 'a');
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
