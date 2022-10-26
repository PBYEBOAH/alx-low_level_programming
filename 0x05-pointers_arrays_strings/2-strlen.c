#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer string used to measure length
 *
 * Return: length value of string
 */
int _strlen(char *s)
{
	int len_var = 0;

	while (*s != '\0')
	{
		s++;
		len_var++;
	}
	return (len_var);
}
