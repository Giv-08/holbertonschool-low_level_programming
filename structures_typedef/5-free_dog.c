#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d - take dog_t 'd' as parameter
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
