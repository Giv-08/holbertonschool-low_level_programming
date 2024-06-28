#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int i;
	int length = 0;
	char *begin_pointer, *end_pointer, character;

	while (s[length] != '\0')
	{
		length++;
	}

	begin_pointer = s;
	end_pointer = s + (length - 1);

	for (i = 0; i < length / 2; i++)
	{
		character = *end_pointer;
		*end_pointer = *begin_pointer;
		*begin_pointer = character;
		begin_pointer++;
		end_pointer--;
	}
}
