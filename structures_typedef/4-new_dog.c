#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - creates a new dog
 * @name: Take name 'name' as parameter
 * @age: Take float 'age' as parameter
 * @owner: Take char 'owner' as parameter
 * Return: NULL if the function fails
 */
char *_strdup(const char *str)
{
	char *dup;
	int len = 0, i = 0;

    while (str[len])
        len++;

    dup = malloc(len + 1);
    if (dup == NULL)
        return (NULL);
    while (i <= len)
    {
        dup[i] = str[i];
	i++;
    }
    return (dup);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(dog_t));
	{
		if (new_dog->name == NULL)
		{
			return (NULL);
		}
	}
	new_dog->name = _strdup(name);

	new_dog->owner = malloc(sizeof(dog_t));
	{
		if (new_dog->owner == NULL)
		{
			return (NULL);
		}
	}
	new_dog->owner = _strdup(owner);

	new_dog->age = age;
	return (new_dog);
}
