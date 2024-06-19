#include <unistd.h>
#include "main.h"
/**
* print_alphabet_x10 - Prints the lowercase alphabet
* Description: This function prints a-z 10 times
* followed by a new line using write
*/

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";
	write(1, str, 27);
}
