#include "main.h"
/**
 * _strncpy - append the src string to the dest string
 * @dest: the pointer variable to char
 * @src: the pointer variable to char
 * @n: the number of character to be append from src
 * Return: the output dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;
	int x;

	x = 0;
	while (*(dest + x) != '\0')
	{
	x++;
	}
	for (y = 0; y < n; y++)
	{
		if (y > x)
		{
		break;
		}
	*(dest + y) = *(src + y);
	}
	return (dest);
}
