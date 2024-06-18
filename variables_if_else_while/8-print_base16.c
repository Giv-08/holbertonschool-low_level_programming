#include <stdio.h>

/**
* main - Entry point
* Description: 'This function is to display all base 16 numbers'
* using putchar
* Return: Always 0 (Success)
*/
int main(void)
{
	char number;
	char alphabet;

	number = '0';
	while (number <= 9)
	{
		putchar(number);
		number++;
	}
	alphabet = 'a';

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
