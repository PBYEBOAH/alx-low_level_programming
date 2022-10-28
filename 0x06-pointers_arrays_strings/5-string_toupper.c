#include "main.h"

/**
 * string_toupper - convert lowercase characters to uppercase
 *
 * @s: string
 *
 * Return: uppercase characters
  */
char *string_toupper(char *s)
{
	int index;

	index = 0;

	while (*(s + index) != '\0')
	{
		if (*(s + index) >= 97  && *(s + index) <= 122)
		{
			*(s + index) -= 97 - 65;
		}
		index++;
	}
	return (s);
}
