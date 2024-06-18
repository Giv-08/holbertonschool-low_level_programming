#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display all base 16 numbers'
* using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char number = '0';
	char alphabet = 'a';

	while (number < 9)
	{
		putchar('0' + number);
		number++;
	}
	while (alphabet < 'g')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}