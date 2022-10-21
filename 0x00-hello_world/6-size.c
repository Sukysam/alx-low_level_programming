#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	char c;
	long int d;
	long long int j;

	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %ld byte(s)", (unsigned long)sizeof(j));
	return (0);
}
