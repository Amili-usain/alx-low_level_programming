#include "main.h"

/**
 * _isalpha - Prints 1 if the input is a letter and 0 for other cases.
 * @c: The character in ASCII code.
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 112) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
	
