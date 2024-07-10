#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: take struct 'd' as parameter
 * @name: take char 'name' as parameter
 * @age: take float 'age' as parameter
 * @owner: take char 'owner' as parameter
 * Return: d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
