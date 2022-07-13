#include"main.h"

/**
 * _strcmp - compares two strings.
 * @s1: @s1: A pointer to the first string to be compared.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals, another number if not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
