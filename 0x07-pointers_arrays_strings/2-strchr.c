#include "main.h"

/**
 * _strchar - Entry point
 * @s: input character
 * @c: input character
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
