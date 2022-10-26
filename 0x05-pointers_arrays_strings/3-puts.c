#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: each character of string
 *
 * Return: string output to screen
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
