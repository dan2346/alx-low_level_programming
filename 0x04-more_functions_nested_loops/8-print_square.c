#include "main.h"

/**
 * print_square - prints hashes square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			-putchar('\n');
	}
	_putchar('\n');
}
