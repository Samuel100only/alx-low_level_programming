#include "main.h"
/**
 * main - print out alphabet in lower case
 * Return: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print all alpahbet in lower case
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
