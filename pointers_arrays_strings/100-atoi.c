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
	int i = 0;
	unsigned int output = 0;
	int sign = 1;
	int digit = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			digit = 1;
			output = (output * 10) + (s[i] - '0');
			i++;
		}
		if (digit == 1)
		{
			break;
		}
		i++;
	}

	output = output * sign;
	return (output);
}

