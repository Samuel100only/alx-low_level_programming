#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1, len2;

	if (p == NULL)
	{
	return (NULL);
	}
	len1 = strlen(name);
	len2 = strlen(owner);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p.name = malloc(sizeof(char) * (len1 + 1));
	if (p.name == NULL)
	{
		free(p);
		return (NULL);
	}
	p.owner = malloc(sizeof(char) * (len2 + 1));
	if (p.owner == NULL)
	{
		free(p);
		free(p.name);
		return (NULL);
	}
	strcpy(p.name, name);
	strcpy(p.owner, owner);
	dog.age = age;

	return (p);
}
