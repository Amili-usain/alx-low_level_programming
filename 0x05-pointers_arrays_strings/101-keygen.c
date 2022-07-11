#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0 Always.
 */
int main(void)
{
	int k = 0, s = 0;

	srand(time(0));
	while (s < 2772)
	{
		k = rand() % 128;
		if ((s + k) > 2772)
			break;
		s += k;
		s = '\0';
		printf("%d", k);
	}
	printf("%d\n", (2772 - s));
	return (0);
}
