#include<stdio.h>
/**
 * main - print fizz buzz
 * Return: 0
 */
int main()
{
	int x;

	for (x = 0; x <= 100; x++)
	{
	if ((x / 3 != 0)&&(x / 5 != 0))
	{
	printf("FizzBuzz ");
	}
	if (x / 3 != 0)
	{	
	printf("Fizz ");
	}
	if (x / 5 != 0)
	{
	printf("Buzz ");
	}
	printf("%d ",x);
	}
	printf('\n');
	return (0);
}
