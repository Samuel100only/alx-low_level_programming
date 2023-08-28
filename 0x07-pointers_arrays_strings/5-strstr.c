#include "main.h"
/**
 * _strstr - return the pointer of first occurrence of the sub-st
 * @haystack: the sub-string to find in
 * @needle: the string to find
 * Return: the address of the s first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; *(haystack + x) != '\0'; x++)
	{
	for (y = 0; (*(haystack + x) == *(needle + y)); y++)
	{
	if (*(haystack + x + 1) == *(needle + y + 1))
	{
	return (haystack + x);
	}
	}
	}
	return ('\0');
}
