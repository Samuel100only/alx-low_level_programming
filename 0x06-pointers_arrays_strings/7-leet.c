#include "main.h"
/**
 * leet - encode the string into 1337
 * @srt: the string variable
 * Return: address of srt
 */
char *leet(char *srt)
{
	int x;
	char change1[] = { 'a', 'e', 'o', 't', 'l'};
	char change2[] = { 'A', 'E', 'O', 'T', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};

	for (y = 0; *(srt + y); y++)
	{
	for (x = 0; x < 5; x++)
	{
	if ((*(srt + y) == change1[x]) || (*(srt + y) == change2[x]))
		{
		*(srt + y) = replace[x];
		}
	}
	}
	return (srt);
}
