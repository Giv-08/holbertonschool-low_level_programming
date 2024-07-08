#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: Take int 'str' as parameter
 * Return: NULL if str = 0
 */

char *_strdup(char *str)
{
	char *string;
	char *new_string;
	string = malloc(sizeof(*str) * (strlen(str) + 1));

	if (str == 0)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		*string = *str;
		str++;
		string++;
	}

	new_string = string;
	return (new_string);
}
