#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r = 0, s = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (s < 2772)
	{
		r = rand() % 128;
		if ((s + r) > 2772)
			break;
		s = s + r;
		printf("%d", r);
	}
	printf('%d\n', (2772 - s));
	return (0);
}
