#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * struct dog - structure definition of a dog
 * @d: struct dog
 * @name: name of the dog, char.
 * @age: age of the dog, float.
 * @owner: owner of the dog.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
