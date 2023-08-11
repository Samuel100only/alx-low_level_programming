#include <stdio.h>
/**
 *main - return 0 after print all numbers
 * Return: 0 (success)
 */
int main(void)
{
	char nums = 0;

	while (nums < 10)
	{
	putchar(nums);
	nums++;
	}
	putchar('\n');
	return (0);
}
