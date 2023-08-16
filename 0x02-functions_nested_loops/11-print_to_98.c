#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers to 98
 * @n: is the number start from
 * Return: result
 */
void print_to_98(int n)
{
	if (n >= 0 && n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n <= 97)
		{
		printf("%d, ",n);
		} else
			{ 
			printf("%d ", n);
			}
	}
	}
	else if (n > 0 && n > 98)
	{
	for (; n >= 98; n--)
	{
	if (n >= 97)
		{
		printf("%d, ", n);
		} else 
			{
                        printf("%d ", n);
                        }
	}
	}
	else if (n < 0)
	{
	for (; n >= 98; n--)
	{
	printf("%d", n);
	if (n >= 97)
		{
                printf("%d, ", n);
                } else
                        {
                        printf("%d ", n);
                        }
	}
	}
}
