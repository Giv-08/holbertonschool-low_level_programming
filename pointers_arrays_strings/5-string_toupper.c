#include "main.h"
#include <stdio.h>

/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @*: Take char '*' as strings
* Return: s as original address
*/

char *string_toupper(char *s)
{
	char *pointer = s;

	while (*pointer != '\0')
	{
		if (*pointer >= 'a' && *pointer <= 'z')
		{
			*pointer = *pointer - 32;
		}
		pointer++;
	}
	return (s);

}
