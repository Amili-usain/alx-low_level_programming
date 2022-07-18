/*
 * File: 2-strchr.c
 * Auth: Amili H
 * Task: writing a function that locates a character in a string.
 */
#include "main.h"

/**
 * strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i;
	for (I = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
