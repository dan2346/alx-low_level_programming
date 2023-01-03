#include "main.h"

/**
 * _strstr - return a pointer to the begiinnig of the location substring
 * @haystack: input char
 * @needle: input char
 * Return: Always 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
