#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by new line
 * @s: The string to be printed.
 * @rev - variable to store reversed characters
 * Return: reversed string
 */
void print_rev(char *s)
{
	char rev[1000];
	int index, j, count = 0;

	while (s[count] != '\0') /* finding length of string */
	{
		count++;
	}
	j = count - 1;

	/* reversing string */
	for (index = 0; index < count; index++)
	{
		rev[index] = s[j];
		j--;
		_putchar(rev[index]);
	}
	_putchar('\n');
}
