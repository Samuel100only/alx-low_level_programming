#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * @len: the length of string
 * Return: Always 0 (Success)
 */
int check_num(char *str, int len)
{
	int x;

	for (x = 0; x < len; x++)
	{
	if (isdigit(str[x]))
	{
	return (1);
	}
	}
	return (0);
}
/**
 * main - print the arrgument from commandline
 * @argc: its the size of the argument strings
 * @argv: its the array where string insert
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	int x = 0;

	for (i = 1; i < argc; i++)
	{
	if (check_num(argv[i], argc))
	{
	x += atoi(argv[i]);
	}
	else
	{
	printf("Error\n");
	return (1);
	break;
	}
	}
	printf("%d\n", x);
	return (0);
}
