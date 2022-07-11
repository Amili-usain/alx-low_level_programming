#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int length = 0, l;

	while (s[l++])
		length++;

	for (l = length - 1; l >= 0; l--)
		_putchar(s[l]);

	_putchar('\n');
}
