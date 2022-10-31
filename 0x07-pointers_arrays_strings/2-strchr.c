#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search for character
 * @c: character to search
 *
 * Return: character if found, null if not
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c != *s)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
		if (c == '\0')
			return (s);
		return (NULL);
}
