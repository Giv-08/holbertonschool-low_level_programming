#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: Take char 's1' as parameter
 * @s2: Take char 's2' as parameter
 * @n: Take int 'n' as parameter
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *full_string;
	unsigned int i = 0, j = 0;
	unsigned int len_one = 0, len_two = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_one] != '\0')
		len_one++;
	while (s2[len_two] != '\0')
	{
		if (n >= len_two)
			n = len_two;
		len_two++;
	}
	full_string = malloc(sizeof(char *) * (len_one + n + 1));
	if (full_string == NULL)
		return (NULL);
	while (i < len_one)
	{
		full_string[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		full_string[len_one + j] = s2[j];
		j++;
	}
	full_string[len_one + j] = '\0';
	return (full_string);
}
