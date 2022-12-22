#include "main.h"

/**
 * _strcat - concentrate the string pointed to @src, terminate
 * at null byte, end at @dest;
 * @dest: A pointer to the string to be concentrated upon
 * @src: The source string to be appended to @dest;
 * Return: A pointer to the destination string @dest;
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
