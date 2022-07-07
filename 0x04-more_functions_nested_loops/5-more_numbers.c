#include "main.h"
/**
 * more_numbers - prints 10 times numbers between 0 to 14
 */
void more_numbers(void)
{
	int n, count;

	for (count = 48; count <= 57; count++)
	{
		for (n = 48; n <= 62; n++)
		{
			if (n > 57)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar("\n");
	}
}
