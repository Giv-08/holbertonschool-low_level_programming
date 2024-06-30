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
        if (n / 10 != 0) {
            print_number(-(n / 10));
        }
        _putchar('0' - (n % 10));
    } else {
        if (n / 10 != 0) {
            print_number(n / 10);
        }
        _putchar((n % 10) + '0');
    }
}
