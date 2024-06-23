#include <stdio.h>

/**
* main - Entry point
* Description: This function finds and prints the sum
* of the even-valued terms, followed by a new line
* the Fibonacci sequence whose values do not exceed 4,000,000
* Return: Always 0 (Success)
**/

int main(void)
{
	long int fib_one = 1;
	long int fib_two = 2;
	long int next;
	int sum = 2;

	while (fib_two <= 4000000)
	{
		next = fib_one + fib_two;
		fib_one = fib_two;
		fib_two = next;

		if (next % 2 == 0)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);
	return (0);
}
