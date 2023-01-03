#include "main.h"

/**
 * _strpbrk - return pointer to the bytes
 * @s: input char
 * @accept: input char
 *
 * Return: Always 0 on success
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
