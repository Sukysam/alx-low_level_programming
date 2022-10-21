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

	printf("Size of int: %ld bytes\n", sizeof(intType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of char: %ld bytes\n", sizeof(charType));
	printf("Size of long int: %ld bytes\n", sizeof(lIntType));
	printf("Size of long long int: %ld bytes", sizeof(llIntType));
	return (0);
}
