#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a nez dog
 *
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: the struct for the new dog or NULL for error
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lenname, lenowner, i;

	lenname = lenowner = 0;

	while (name[lenname++])
		;
	while (owner[lenowner++])
		;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(lenname * sizeof(newdog->name));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; i < lenname; i++)
		newdog->name[i] = name[i];

	newdog->age = age;

	newdog->owner = malloc(lenowner * sizeof(newdog->owner));
	if (newdog == NULL)
		return (NULL);
	for (i = 0; i < lenowner; i++)
		newdog->owner[i] = owner[i];

	return (newdog);
}
