#include <stdio.h>
/**
 * _strcpy - copy the string from src to dest including \0 char
 * @dest: the pointer to be copied on
 * @src: the pointer to be copied from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; *(src + x) != '\0'; x++)
	{
	*(dest + x) = *(src + x)
	}
	*(dest + x) = '\0';
	return (*dest);
}
