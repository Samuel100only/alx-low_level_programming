#include <stdio.h>
#include "main.h"
/**
 * main - print the arrgument from commandline
 * @argc: its the size of the argument strings
 * @argv: its the array where string insert
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n",argv[i]);
	}
	return (0);
}
