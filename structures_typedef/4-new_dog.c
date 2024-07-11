#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: Take name 'name' as parameter
 * @age: Take float 'age' as parameter
 * @owner: Take char 'owner' as parameter
 * Return: NULL if the function fails
 */

int str_length(char *str)
{
	int length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return (length);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	unsigned int name_length, owner_length;
	unsigned int i = 0;

	new_dog = (char *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_length = str_length(name);
	owner_length = str_length(owner);

	new_dog->name = (char *)malloc(name_length + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	while (i <= name_length)
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->owner = malloc(owner_length + 1);
        if (new_dog->owner == NULL)
        {
                return (NULL);
        }
	while (i <= owner_length)
        {
                new_dog->owner[i] = owner[i];
		i++;
        }
	new_dog->age = age;
	return (new_dog);
}
