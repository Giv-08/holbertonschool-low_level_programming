#include <unistd.h>

/**
* main - Entry point
* Description: This function prints _putchar followed by a new line using write
* Return: Always 0 (Success)
*/
void print_alphabet(void);
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
