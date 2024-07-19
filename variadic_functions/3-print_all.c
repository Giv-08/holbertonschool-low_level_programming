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
	char *str;
	int i;
	char c;
	float f;
	char *separator;

	va_list lists;

	va_start(lists, format);
	while (p != NULL && *p != '\0')
	{
		switch (*p){
			case 'c':
				c = va_arg(lists, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(lists, int);
				printf("%c", i);
				break;
			case 'f':
				f = va_arg(lists, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(lists, char *);
				if (str != NULL)
				{
					printf("%s", str);
				}
				break;
		}
		separator = ", ";
		printf("%s", separator);
		p++;
	}
	printf("\n");
	va_end(lists);
}
