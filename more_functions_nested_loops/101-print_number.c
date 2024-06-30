#include <stdio.h>
#include "main.h"

/**
* print_number - Prints an integer
* @n: Take 'n' as parameter
*/

void print_digits(int num)
{
    unsigned int digit;
    if (num == 0) {
        return;
    }
    digit = num % 10;
    print_digits(num / 10);
    _putchar(digit + '0');
}

void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n == 0) {
        _putchar('0');
        return;
    }

    print_digits(n);
}
