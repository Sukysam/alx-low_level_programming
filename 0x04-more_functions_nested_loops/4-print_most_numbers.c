#include "main.h"

/**
 * print_most_numbers - A fuction that check to not print  some certin numbers from 0 to 9
 * _putchar: print out numbers
 * Return: Always (0)
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if(c == '2' && c = '4')
		continue;
		_putchar(c);
	}
	_putchar('\n');
}
