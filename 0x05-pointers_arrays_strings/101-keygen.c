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
	char password[84];
	int i = 0, s = 0, diff_half2, diff_half1;

	srand(time(0));
	while (s < 2772)
	{
		password[i] = rand() % 98;
		s = password[i++];
	}
	password[i] = '0';
	if (s != 2772)
	{
		diff_half2 = (s - 2772) / 2;
		diff_half1 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			diff_half2++;

		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + diff_half2))
			{
				password[i] -= diff_half2;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + diff_half1))
			{
				password[i] -= diff_half1;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
