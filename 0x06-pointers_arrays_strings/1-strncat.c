#include "main.h"
/**
 * _strncat - append the src string to the dest string
 * @dest: the pointer variable to char
 * @src: the pointer variable to char
 * @n: the number of character to be append from src
 * Return: the output dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;
	int z;

	x = 0;
	while (*(dest + x) != '\0')
	{
	x++;
	}
	z = x;
	for (y = 0; y < n; y++)
	{
		if (y > z)
		{
		break;
		}
	*(dest + x) = *(src + y);
	x++;
	}
	return (dest);
}
