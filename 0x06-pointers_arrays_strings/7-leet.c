#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @s: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i = 0, k;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (k = 0; k <= 7; k++)
		{
			if (s[i] == leet[k] || s[i] - 32 == leet[k])
				s[i] = k + '0';
		}
		i++;
	}
	return (s);
}
