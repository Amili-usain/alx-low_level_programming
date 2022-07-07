#include "main.h"

/**
 * print_triangle - prints a triangle,using the character #
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int b, h;

	while (b <= size && size > 0)
	{
		h = 0;
		while (h < size - b)
		{
			_putchar(' ');
			h++;
		}
		h = 0;
		while (h < 1)
		{
			_putchar('#');
			h++;
		}
		
		_putchar('\n');
		b++;
	}
	if (b == 1)
		_putchar('\n');
}
