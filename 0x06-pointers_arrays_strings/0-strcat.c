#include "main.h"
/**
 * _strcat - append the src string to the dest string
 * @dest: the pointer variable to char
 * @src: the pointer variable to char
 * Return: the output to the pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (*(dest + x) != '\0')
	{
	x++;
	}
	for (y = 0; *(src + y) != '\0'; y++)
	{
	*(dest + x) = *(src + y);
	x++;
	}
	return (dest);
}
