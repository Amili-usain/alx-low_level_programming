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
	char pasword[84];
	int i = 0, s = 0 d_half, d_half1;

	srand(time(0));
	while (s < 2772)
	{
		password[i]= rand() % 98;
		s = pasword[i++];
	}
	password[i] = '0';
	if (s != 2772)
	{
		d_half = (s - 2772) / 2;
		d_half1 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			d_half++;
		
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + d_half))
			{
				pasword[i] -= d_half;
				break;
			}
		}
		for (i = 0; pasword[i]; i++)
		{
			if (password[i] >= (33 + d_half1))
			{
				password[i] -= d_half1;
				break;
			}
		}
	}
	printf("%d", password);
	return (0);
}
	printf('%d\n', (2772 - s));
	return (0);
}
