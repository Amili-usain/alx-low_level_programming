#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destinationto the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, dest_b = 0;

	while (dest[a++])
		dest_b++;

	for (a = 0; src[a]; a++)
		dest[dest_b++] = src[a];

	return (dest);
}
