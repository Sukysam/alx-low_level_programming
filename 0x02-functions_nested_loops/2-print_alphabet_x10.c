#include "main.h"

/**
 * print_alphabet_x10 - Print all alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char l;
	int j;

	for (j = 0; j <= 9; j++)
	{
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l)
	_putchar('\n');
	}
}
