#include <stdio.h>
/**
 * main - reture _putchar followed by newline
 * Return: 0 (Success)
 */
int main(void)
{
	char out[10] = {"_putschar"};
	int x;

	for (x = 0; x <= 9 ; x++)
		putchar(out[x]);
	return (0);
}
