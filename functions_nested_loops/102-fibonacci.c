#include <stdio.h>

/**
* main - Entry point
* Description: This function prints the first 50 Fibonacci
* numbers, starting with 1 and 2, followed by a new line
* Return: Always 0 (Success)
**/

int main(void)
{
	long int fib_one = 1;
	long int fib_two = 2;
	long int next;
	int count = 2;

	printf("%ld", "%ld", fib_one, fib_two);

	while (count < 50)
	{
		next = fib_one + fib_two;
		printf(" ,%ld", next);

		fib_one = fib_two;
		fib_two = next;
		count++;
	}
	printf("\n");

	return (0);
}
