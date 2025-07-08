#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new type struct dog
 *
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
