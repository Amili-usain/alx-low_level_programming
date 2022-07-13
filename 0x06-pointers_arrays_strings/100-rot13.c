#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int num = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + num) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + num) == alphabet[i])
			{
				*(s + num) = rot13[i];
				break;
			}
		}
		num++;
	}
	return (s);
}
