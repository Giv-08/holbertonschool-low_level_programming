#include <unistd.h>

/**
* print_alphabet - Prints the lowercase alphabet followed by a newline
* Description: This function prints a-z followed by a new line using write
* Return: Always 0 (Success)
*/

void print_alphabet(void);

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz\n";

	write(1, str, 27);
}
