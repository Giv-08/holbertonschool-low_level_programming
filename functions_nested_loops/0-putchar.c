#include <unistd.h>

/**
 * main - Entry point
 * Description: This function prints _putchar followed
 * by a new line using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar\n";

	write(1, str, 9);
	return (0);
}
