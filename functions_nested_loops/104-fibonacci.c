#include <stdio.h>

/**
* main - Entry point
* Description: This function finds and prints
* the first 98 Fibonacci numbers, starting with 1 and 2
* Return: Always 0 (Success)
**/

int main(void)
{

	int fib_one = 1;
	int fib_two = 2;
	int next;
	int count = 2;

	while (count < 98)
	{

		next = fib_one + fib_two;
		fib_one = fib_two;
		fib_two = next;
		count++;
	}
	return (0);
}
