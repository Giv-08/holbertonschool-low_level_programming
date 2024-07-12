#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d - take dog_t 'd' as parameter
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
