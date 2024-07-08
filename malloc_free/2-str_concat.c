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
	int i = 0;
	int j = 0;
	int k = 0;
	char *full_string;

	if (s1 == NULL)
	{
		return ("");
	}

	if (s2 == NULL)
	{
		return ("");
	}

	while (s1[i] != '\0')
	{	
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	full_string = malloc((i + j + 1) * sizeof(char));

	if (full_string == NULL)
	{
		return (NULL);
	}

	while (k < i)
	{
		full_string[k] = s1[k];
		k++;
	}

	while (k < j)
	{
		full_string[i + k] = s2[k];
		k++;
	}

	full_string[i + j] = '\0';

	return (full_string);
}
