#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: Take char 's' as parameter
 * Return: nothing when string is empty
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar("\n");
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

