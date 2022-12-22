#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: if str1 < str2, the negative diffrence
 * if str1 == str2, 0
 * if str1 > str2, the positive diffrence
 *  of the unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
