#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 */
void times_table(void)
{
	int a, b, i;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(44);
			_putchar(32);

			i = a * b;

			if (i <= 9)
				_putchar(32);
			else
				{
					_putchar((i / 10) + 48);
					_putchar((i % 10) + 48);
				}
		}
		_putchar('\n');
	}
}
