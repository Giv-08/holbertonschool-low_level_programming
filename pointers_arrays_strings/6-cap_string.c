#include "main.h"
#include <stdio.h>

/**
* *string_toupper - capitalizes all words of a string
* @s: Take char '*s' as strings
* Return: s as original address
*/

char *cap_string(char *s)
{
	char *cap = s;

	if (*cap >= 'a' && *cap <= 'z')
	{
		*cap = *cap - 32;
	}
	return (s);
}
