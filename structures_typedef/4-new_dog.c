#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - custom strdup function
 * @str: Take char 'str' as parameter
 * Return: cpy
 */

char *_strdup(char *str)
{
	char *cpy;
	int len = 0, i = 0;

	while (str[len])
		len++;
	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (i <= len)
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}

/**
 * *new_dog - creates a new dog
 * @name: Take name 'name' as parameter
 * @age: Take float 'age' as parameter
 * @owner: Take char 'owner' as parameter
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
