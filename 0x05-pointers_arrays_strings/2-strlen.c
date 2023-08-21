#include "main.h"
/**
 * _strlen - return the number of character in string s
 * @s: the variable to be count
 * Return: the number of character
 */
int _strlen(char *s)
{
	int count;
	int y = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
	y++;
	}
	return (y);
}
