#include "main.h"
#include <stdio.h>

/**
* is_separator - check if a character is a word separator
* @c: Take char 'c' as character
* Return: all separetors
*/

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
		c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
		c == ')' || c == '{' || c == '}');
}

/**
* *cap_string - capitalizes all words of a string
* @s: Take char '*s' as strings
* Return: s as original address
*/

char *cap_string(char *s)
{
	char *cap = s;
	int new_word = 1;

	while (*cap != '\0')
	{
		if (is_separator(*cap))
			new_word = 1;
		else if (new_word && *cap >= 'a' && *cap <= 'z')
		{
			*cap = *cap - 32;
			new_word = 0;
		}
		else
			new_word = 0;
		cap++;
	}
	return (s);
}
