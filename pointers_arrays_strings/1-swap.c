#include <stdio.h>
#include "main.h"

/**
* swap_int - Swaps the values of two integers
* @a: Take '*a' as parameter
* @b: Take '*b' as parameter
*/

void swap_int(int *a, int *b)
{
        int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
