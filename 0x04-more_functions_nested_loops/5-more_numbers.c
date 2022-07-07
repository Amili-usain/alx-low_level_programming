#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14 ten times.
 */
void more_numbers(void)
{
	int n, c;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
