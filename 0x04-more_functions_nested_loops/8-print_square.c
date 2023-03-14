#include "main.h"

/**
 * print_square - fuction print the numbers of # character as block
 * @size: numbers of # character
 *
 */

void print_square(int size)
{
	if (size <= 0)
		_puchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
		}
		_putchar('\n');
	}
}
