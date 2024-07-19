#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"

/**
 * print_char - prints characters
 * @lists: A va_list pointing to the character to print
 */

void print_char(va_list *lists)
{
	printf("%c", va_arg(*lists, int));
}

/**
 * print_integer - prints integers
 * @lists: A va_list pointing to the character to print
 */

void print_integer(va_list *lists)
{
	printf("%d", va_arg(*lists, int));
}

/**
 * print_float - prints floats
 * @lists: A va_list pointing to the character to print
 */

void print_float(va_list *lists)
{
	printf("%f", va_arg(*lists, double));
}

/**
 * print_str - prints strings
 * @lists: A va_list pointing to the character to print
 */

void print_str(va_list *lists)
{
	char *data_type = va_arg(*lists, char *);

	if (data_type == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", data_type);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: take any format as parameter
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	const char *p = format;

	va_list lists;

	va_start(lists, format);

	switch (*p){
		case 'd':
		printf("%d", va_arg(lists, int));
		break;
		case 'c':
		printf("%c", va_arg(lists, int));
		break;
		case 'f':
		printf("%f", va_arg(lists, double));
		break;
		case 's':
		printf("%s", va_arg(lists, const char *));
		break;
		case '0':
		break;
	}
	printf("\n");
	va_end(lists);
}
