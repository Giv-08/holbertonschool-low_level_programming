#include "main.h"
#include <stdio.h>

/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @*: Take char '*' as strings
* Return: Always 0 (success)
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (0);

}
