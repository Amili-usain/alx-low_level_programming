#include "main.h"
/**
 * print_times_table - Prints the times table of the input, starting with 0.
 * @n: The value of the times table to be printed.
 *
 */
void print_times_table(int n)
{
	int i, mult, pdt;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				pdt = i * mult;

				if (pdt <= 99)
					_putchar(' ');
				if (pdt <= 9)
					_putchar(' ');
				if (pdt >= 100)
				{
					_putchar((pdt / 100) + '0');
					_putchar((pdt / 10) + '0');
				}
				else if (pdt <= 99 && prod >= 10)
				{
					_putchar((pdt / 10) + '0');
				}
				_putchar((pdt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
