#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs struct
 * @d: the pointer to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(*d);
}
