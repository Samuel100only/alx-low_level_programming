#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the arrgument from commandline
 * @argc: its the size of the argument strings
 * @argv: its the array where string insert
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
