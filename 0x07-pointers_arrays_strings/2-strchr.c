/*                                                 * File: 2-strchr.c
 * Auth: Amili H                                   * Task: writing a function that locates a character in a string.                                    */
#include "main.h"
                                                  /**                                                * _strchr - Locates a character in a string.      * @s: The string to be searched.                  * @c: The character to be located.                *
 * Return: If c is found - a pointer to the first occurence.                                         *         If c is not found - NULL.
 */
char *_strchr(char *s, char c)                    {
        int i = 0;

        for (; s[i] >= '\0'; i++)                         {
                if (s[i] == c)
                        return (s + i);
        }
        return ('\0');
}
