#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - pick the last digit and compare it by if
 * Return: 0
 */
int main(void)
{
	int n;
	unsigned int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	z = n % 10; /*take out the last digit */
	if (z == 0)
	{
	printf("Last digit of %d is 0\n", n);
	}
	else if (z > 5)
	{
	printf("Last digit of%d is %lu and is greater than 5\n", n);
	}
	else if (z < 6)
	{
	printf("Last digit of%d is %lu and ", n, z);
	printf("is less than 6 and not 0\n");
	}
	return (0);
}
