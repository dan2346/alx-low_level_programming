#include <stdio.h>

/**
 * main - prints combination of three digits
 * Return: Always 0
 */

int main(void)
{
	int n = '0';
	int m = '0';
	int k = '0';

	for (k = '0'; k <= '9'; k++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if (!((n == m) || (m == k) || (m > n) || (k > m)))
				{
					putchar(k);
					putchar(m);
					putchar(n);
					if (!(n == '9' && k == '7' && m == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
