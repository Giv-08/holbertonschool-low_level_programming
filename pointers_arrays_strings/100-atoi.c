#include <stdio.h>
#include "main.h"

/**
* _atoi - convert a string to an integer
* The number in the string can be preceded by
* an infinite number of characters
* You need to take into account all the - and
* + signs before the number
* @s: Take char 's' as character
* Return: Always 0 (success)
*/

int _atoi(char *s)
{
	int output = 0;
	int negative = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s++;
	}

	if (*s == '-')
	{
		negative = 1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= 9)
	{
		output = output * 10 + (*s - '0');
		s++;
	}

	if (negative)
	{
		output = -output;
	}

	return (output);
}

