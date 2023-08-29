#include "main.h"
/**
 * set_string - set the value of pointer 's' to 'to' pointer
 * @s: is the pointer to copied
 * @to: is the pointer to copied on
 */
void set_string(char **s, char *to)
{
	int i;
	int j;
	int z;

	i = 0;
	while (*(to + i) != '\0')
	{
	i++;
	}
	for (j = 0; *(to + j) != '\0'; j++)
	{
	s[j] = &to[j];
	}
	if (i - j != 0)
	{
	z = i - j;
	for (;**(s + z) != '\0'; z++)
	{
	s[z] = '\0';
	}
	}
}
