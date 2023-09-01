#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - print the arrgument from commandline
 * @argc: its the size of the argument strings
 * @argv: its the array where string insert
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	result = 0;

	if (i < 0)
	{
	printf("0\n");
	return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
	for (; i >= coins[j]; i -= coins[j])
	{
	result++;
	}
	}
	printf("%d\n", result);
	return (0);

}
