#include <stdio.h>
/**
 *main - return 0 after print all numbers
 * Return: 0 (success)
 */
int main(void)
{
	int nums = 0;

	while (nums < 10)
	{
	printf("%d", nums);
	nums++;
	}
	putchar('\n');
	return (0);
}
