#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - Prints a string, in reverse, followed by a new line
* @s: Take char '*s' as parameter
*/

void print_rev(char *s)
{
	int length = strlen(s);
	char *start = s;
	char *end = s + length - 1;
	
	while (*start < *end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
		_putchar(*s);
	}
	_putchar('\n');

}
