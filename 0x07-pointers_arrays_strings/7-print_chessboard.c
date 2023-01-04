#include "main.h"

/**
 * print_chessboard - prints chessboard in letters
 * @a: array
 *
 * Return: Always 0 on success
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
