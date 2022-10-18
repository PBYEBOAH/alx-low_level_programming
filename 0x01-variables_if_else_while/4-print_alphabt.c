#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, except q and e
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if ((alpha != 'e') & (alpha != 'q'))
			putchar(alpha);
	putchar('\n');

	return (0);
}
