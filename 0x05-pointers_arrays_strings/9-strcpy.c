#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @src: The source string to copy.
 * @dest: A buffer to copy the string to.
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m])
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
