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

	number = '0';
	while (number <= 9)
	{
		putchar(number);
		number++;
	}
	number = 'a';

	while (number <= 'f')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
