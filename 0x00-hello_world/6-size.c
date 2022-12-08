#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %i bytes(s)\n", sizeof(char));
	printf("size of int: %i bytes(s)\n", sizeof(int));
	printf("size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("size of long long int: %i byte(s)\n" sizeof(long long int));
	printf("size of float: %i bytes(s)\n", sizeof(float));
	return (0);
}
