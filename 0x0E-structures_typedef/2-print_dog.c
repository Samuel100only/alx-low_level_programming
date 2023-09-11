#include <stdlib.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: struct pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	exit;
	}
	if ((*d).name == NULL)
	{
	(*d).name = "(nil)";
	}
	if ((*d).age == 0)
	{
	(*d).age = "(nil)";
	if ((*d).owner == NULL)
	{
	(*d).owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
