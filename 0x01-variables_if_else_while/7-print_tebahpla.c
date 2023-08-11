#include <stdio.h>
/**
 *main - return 0 after print all alphabet
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
	putchar(alphabet);
	alphabet--;
	}
	putchar('\n');
	return (0);
}
