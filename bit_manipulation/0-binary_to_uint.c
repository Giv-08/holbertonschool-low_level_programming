#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: take 'b' as parameter
 * Return: Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0, i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			convert = convert * 2;
		}
		else if (b[i] == '1')
		{
			convert = convert * 2 + 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (convert);
}
