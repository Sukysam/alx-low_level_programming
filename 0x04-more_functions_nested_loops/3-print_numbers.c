#include <unistd.h>
#include "main.h"

/**
 * print_numbers - A fuction ton print numbers from 0 to 9
 * _putchar: print out numbers
 * Return: Always (0)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}