#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int num = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + num) >= 97 && *(s + num) <= 122)
		*(s + num) = *(s + num) - 32;
	while (*(s + num) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + num) == sep_words[i])
			{
				if ((*(s + (num + 1)) >= 97) && (*(s + (num + 1)) <= 122))
					*(s + (num + 1)) = *(s + (num + 1)) - 32;
				break;
			}
		}
		num++;
	}
	return (s);
}
