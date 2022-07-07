#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int b, h;

	for (b = 0; b < size; b++)
	{
		for (h = 1; h < (size - b); h++)
			_putchar(' ');

		for (h--; h < size; h++)
			_putchar('#');

		if (b < (size - 1))
			_putchar('\n');
	}

	_putchar('\n');
}
