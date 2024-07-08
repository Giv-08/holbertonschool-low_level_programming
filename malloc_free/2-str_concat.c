#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: Take char 's1' as parameter
 * @s2: Take char 's2' as parameter
 * Return: return NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *string_one = s1;
	char *string_two = s2;
	int i = 0;
	int j = 0;
	int k = 0;
	char *full_string;

	if (string_one == NULL)
	{
		return ("");
	}

	if (string_two == NULL)
	{
		return ("");
	}

	while (string_one[i] != '\0')
	{	
		i++;
	}

	while (string_two[j] != '\0')
	{
		j++;
	}

	full_string = malloc(i + j + 1);

	if (full_string == NULL)
	{
		return (NULL);
	}

	while (k < i)
	{
		full_string[k] = string_one[k];
		k++;
	}

	while (k < j)
	{
		full_string[i + k] = string_two[k];
		k++;
	}

	full_string[i + j] = '\0';

	return (full_string);
}
