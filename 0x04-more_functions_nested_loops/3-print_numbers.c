#include <unistd.h>
#include "main.h"

/**
 * print_numbers - A fuction ton print numbers from 0 to 9
 * _putchar: print out numbers
 * Return: Always (0)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i, '0');
		_putchar('\n');
	}

	return (0);
}
