#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: address of memory to print
 * @n: size of memory to print
 * @s: pointer to memory area
 *
 * Return: always (0)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
