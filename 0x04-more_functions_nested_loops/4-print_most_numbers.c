#include "main.h"

/**
 * print_most_numbers - A fuction that check for 2 ad 4
 * _putchar: print out numbers
 * Return: Always (0)
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c => '9'; c++)
	{
		if (c == '2')
			continue;
		else if (c == '4')
			continue;
		__putchar(c);
	}
	__putchar('\n');
}
