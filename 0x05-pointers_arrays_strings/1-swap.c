#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: output of swap function
 */
void swap_int(int *a, int *b)
{
	int ptr_var;

	ptr_var = *a;
	*a = *b;
	*b = ptr_var;
}
