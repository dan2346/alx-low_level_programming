#include "main.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: The array of int to be reversed
 * @n: The number of elements in the array
 * Return : void
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
