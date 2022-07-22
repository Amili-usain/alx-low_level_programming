#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 *
 */

int _strlen(char *s)
{

	int length = 0;

	while (*s++)
		length++;

	return (length);
}
