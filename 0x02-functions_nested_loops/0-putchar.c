#include "main.h"
/**
 * main - reture _putchar followed by newline
 * Return: 0 (Success)
 */
int main(void)
{
	char out[9] = {"_putchar"};
	int x;

	for (x = 0; x <= 7 ; x++)
	{
		_putchar(out[x]);
	}
	_putchar('\n');
	return (0);
}
