#include "main.h"

/**
 * _strncat - concentrates two strings using an input
 * number of bytes from src
 * @dest: The string to be appended
 * @src: The string to append @dest;
 * @n: The number of bytes from src to appende to dest
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
