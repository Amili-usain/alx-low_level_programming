#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, i;

	for (a = 0; a <= 9; a++)
	{
		_putchar('48');
		for (b = 0; b <= 9; b++)
		{
			i = a * b;
			_putchar(44);
			_putchar(32);
			if (i <= 9)
			{
				_putchar(32);
				_putchar(i + 48);
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
