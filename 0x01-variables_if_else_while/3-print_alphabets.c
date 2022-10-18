#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char small_letter;
	char caps_letter;

	for (small_letter = 'a'; small_letter <= 'z'; small_letter++)
		putchar(small_letter);
	for (caps_letter = 'A'; caps_letter <= 'Z'; caps_letter++)
		putchar(caps_letter);
	putchar('\n');
	return (0);
}
