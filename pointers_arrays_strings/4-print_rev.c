#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - Prints a string, in reverse, followed by a new line
* @s: Take char '*s' as parameter
*/

void print_rev(char *s)
{
	int i;
	
	for (i = *s-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
