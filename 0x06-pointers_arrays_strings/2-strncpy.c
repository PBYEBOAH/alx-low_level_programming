#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @n: length of number of characters to copy
 * @dest: destination string
 * @src: source string
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && *(src + index); index++)
	{
		*(dest + index) = *(src + index);
	}

	for (; index < n; index++)
	{
		*(dest + index) = '\0';
	}
	return (dest);
}
