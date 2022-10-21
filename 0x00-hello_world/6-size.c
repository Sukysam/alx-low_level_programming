#include <stdio.h>
/**
 * main - Entry point
 *
 * sizeof() - print size of types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int lIntType;
	long long int llIntType;

	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lIntType));
	printf("Size of a long long int: %ld byte(s)", sizeof(llIntType))i;
	printf(stderr, anything);
	return (0);
}