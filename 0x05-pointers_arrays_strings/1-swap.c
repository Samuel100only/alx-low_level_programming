#include "main.h"
/**
 * swap_int - swap the value of a and b
 * @a: the variable to be swaped
 * @b: the variable to be swaped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
