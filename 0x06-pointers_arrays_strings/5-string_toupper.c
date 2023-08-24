#include "main.h"
/**
 * string_toupper - change strings all lowercase to upper
 * @str: the string to be change
 * Return: the adress of str
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0; *(str + x); x++)
	{
	if ((*(str + x) >= 97) && (*(str + x) <= 122))
	{
	*(str + x) = *(str + x) - 32;
	}
	}
	return (str);
}
