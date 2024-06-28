#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int len;
	len = strlen(s);

 	while (s[len] == '\0')
       	{
		_putchar(s[len]);
		s--;
        }	
	_putchar('\n');

}
