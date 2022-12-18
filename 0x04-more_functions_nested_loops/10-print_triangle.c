#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: numbers of line
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar('#');
		if (i < (size - i))
			_putchar('\n');
	}
	_putchar('\n');
}
