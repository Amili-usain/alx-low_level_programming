#include<stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, a;

	i = 612852475143;
	for (a = 2; a <= i; a++)
	{
		if (i % a == 0)
		{
			i /= a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}
