#include <stdio.h>

/**
 * main - prints numbers from 1 to 100.
 *	But for multiples of 3 prints Fizz instead of the number.
 *	for multiples of 5 prints Buzz.
 *	For numbers which are multiples of both 3 and 5 prints FizzBuzz.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf(" FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf(" %d", n);

		if (n != 100)
			continue;
		printf(" ");
	}

	printf("\n");
	return (0);
}
