#include "main.h"

/**
 * string_toupper - change all string from
 * lower case to
 * uppercase letter
 * @str: the string to be changed
 *
 * Return: A changed pointer
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
