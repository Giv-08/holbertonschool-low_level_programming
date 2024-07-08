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
	unsigned int i = 0;
	unsigned int j = 0;
	char *p = str;
	char *string;

	if (str == 0)
	{
		return (NULL);
	}

	while (*p != '\0')
	{
		p++;
		i++;
	}
	
	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		string[j] = str[j];
		j++;
	}
	return (string);
}
