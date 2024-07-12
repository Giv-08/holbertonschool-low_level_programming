#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d: pointer to the dog_t structure to be freed
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
