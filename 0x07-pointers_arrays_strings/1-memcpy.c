#include "main.h"
/**
 * _memcpy - copy n number of  byte from src to dest
 * @src: is the source variable
 * @dest: is the destination variable
 * @n: is the number of byte memcpy function copy to dest
 * Return: the addresse of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	*(dest + x) = *(src + x);
	}
	return (dest);
}
