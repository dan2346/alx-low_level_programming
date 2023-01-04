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

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
