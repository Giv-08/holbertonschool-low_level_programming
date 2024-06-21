#include <unistd.h>

/**
* main - Entry point
* Description: This function prints exactly
* 'and that piece of art is useful\" - Dora Korpar, 2015-10-19'
* Return: Always 1 (Success)
*/

int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	putchar('\n');
	write(2, m, sizeof(m) - 1);
	return (1);
}
