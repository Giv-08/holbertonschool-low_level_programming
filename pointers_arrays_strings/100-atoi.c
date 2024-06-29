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
	int sign = 1;
	int output = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] <= '0' && s[i] >= '9')
		{
			output = output * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	output = output * sign;
	return output;
}

