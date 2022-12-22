#include "main.h"

/**
 * _strncpy - copies at most an input number of
 *  bytes from string src to dest
 *  @dest: the buffer stroing the string copy
 *  @src: The source string
 *  @n: The max number of bytes to be copied to src
 *
 *  Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
