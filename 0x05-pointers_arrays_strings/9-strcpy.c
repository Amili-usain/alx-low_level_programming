#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m = -1;

	do {
		m++;
		dest[m] = src[m];
	} while (src[m] != '\0');

	return (0);
}
