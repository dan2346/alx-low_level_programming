#include <stdio.h>

/**
 * main - prints all combination of two digits
 * Return: Always 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; m = 1; n <= 9; m <= 9; n++; m++)
	{
		if (!((n==m) || (m > n)))
		{
			putchar(n);
			putchar(m);
			if (!(n == 9 && m == 8))
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n')
	}

	return (0);
}

