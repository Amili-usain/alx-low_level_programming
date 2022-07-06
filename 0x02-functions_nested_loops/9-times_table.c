#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b, pdt;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			pdt = a * b;

			if (pdt <= 9)
				_putchar(' ');
			else
				_putchar((pdt / 10) + '0');
			_putchar((pdt % 10) + '0');
		}
		_putchar('\n');
	}
}
