#include "main.h"

/**
 * reverse_array - reverse an array
 *
 * @n: number of elements in array
 * @a: array
 *
 * Return: reversed array elements
 */
void reverse_array(int *a, int n)
{
	int arr, temp_arr;

	for (arr = 0; (arr < (n - 1) / 2); arr++)
	{
		temp_arr = a[arr];
		a[arr] = a[n - 1 - arr];
		a[n - 1 - arr] = temp_arr;
	}
}
