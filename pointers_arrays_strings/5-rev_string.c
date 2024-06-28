#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int i, temp;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length / 2)
	{
 		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		i++;
	}
	_putchar(s[i]);
	_putchar('\n');

}
