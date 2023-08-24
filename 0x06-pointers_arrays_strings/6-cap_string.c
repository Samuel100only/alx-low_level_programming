#include "main.h"
/**
 * cap_string - change the first char of word to uppercase
 * @srt: the string variable
 * Return: address of srt
 */
char *cap_string(char *srt)
{
	int x;

	for (x = 0; *(srt + x); x++)
	{
	if (*(srt + x) >= 32 && *(srt + x) <= 63 && *(srt + x) != '\t')
	{
	if (*(srt + x + 1) >= 97 && *(srt + x + 1) <= 122)
	{
	*(srt + x + 1) = *(srt + x + 1) - 32;
	}
	}
	}
	return (srt);
}
