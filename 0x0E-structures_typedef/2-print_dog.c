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
	printf("Name: (nil)");
	}
	else
	{
	printf("Name: %s", (*d).name);
	}
	if ((*d).age == 0)
	{
	printf("Age: (nil)");
	}
	else
	{
	printf("Age: %f", (*d).age);
	}
	if ((*d).owner == NULL)
	{
	printf("Owner: (nil)");
	}
	else
	{
	printf("Owner: %s", (*d).owner);
	}
}
