#include <stdio.h>
#include "main.h"

/**
* _strlen - Write a function that returns the length of a string
* @s: Take char '*s' as parameter
*/

int _strlen(char *s)
{
	int length = 0;
	
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
