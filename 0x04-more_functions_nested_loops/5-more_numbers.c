#include "main.h"

/**
 * more_numbers - A loop inside a loop
 * _putchar: print out numbers
 * Return: Always (0)
 */

void more_numbers(void)
{
	char c;
	char j;

	for (c = '0'; c <= '9'; c++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
		_putchar('\n');
	}
	_putchar(c);
}
