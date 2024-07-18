#include <stdarg.h>

#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * struct op - Struct op
 * @: The operator
 * @f: The function associated
 */

typedef struct formatter
{
        char data_type;
        void (*print)(va_list*);
} fm;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS */
