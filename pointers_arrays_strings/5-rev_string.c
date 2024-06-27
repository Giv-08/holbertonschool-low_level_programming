#include <stdio.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
	 	for (i = length - 1; i >= 0; i--)
        	{
               		_putchar(s[i]);
        	}
		length++;
	}
	
	_putchar('\n');

}
