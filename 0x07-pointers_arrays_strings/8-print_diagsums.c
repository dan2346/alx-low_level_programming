#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -prints sum of two diagonals of a square
 * @a: input char
 * @size: input char
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int y;

	for (y = 0; y < (size * size); y++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size -1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
