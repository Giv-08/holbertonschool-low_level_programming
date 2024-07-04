#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: Take char 's' as parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		char *len = s;
		_putchar(*len);
		len--;
		_print_rev_recursion(s);
	}
}
