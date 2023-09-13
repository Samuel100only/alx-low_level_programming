#include "function_pointers.h"
/**
 * print_name - sent the string name to be print by function f
 * @name: the string to be pass on to f
 * @f: the function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
