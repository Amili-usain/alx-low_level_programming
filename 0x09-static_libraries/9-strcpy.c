#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string pointed to by @src,
 *	including the terminating null byte (\0),
 *	to the buffer pointed to by dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{

	int c = 0;

	while (c >= 0)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
		c++;
	}
	return (dest);
}
