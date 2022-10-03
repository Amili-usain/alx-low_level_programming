#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int a = 0, dest_b = 0;

	while (dest[a++])
		dest_b++;
	for (a = 0; src[a] && a < n; a++)
		dest[dest_b++] = src[a];
	return (dest);
}
