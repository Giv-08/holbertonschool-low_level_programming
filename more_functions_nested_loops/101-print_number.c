#include <stdio.h>
#include "main.h"

/**
* print_number - Prints an integer
* @n: Take 'n' as parameter
*/

void print_number(int n)
{
	if (n < 0) {
        _putchar('-');

        if (n == -2147483648) {
            _putchar('2');
            n = 147483648;
        } else {
            n = -n;
        }
    }

    int place_value = 1;
    while (n / place_value >= 10) {
        place_value *= 10;
    }

    while (place_value > 0) {
        _putchar((n / place_value) % 10 + '0');
        place_value /= 10;
    }
}
