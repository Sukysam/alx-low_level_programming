#include "main.h"

/**
 * print_diagonal - function to print lenght of lines
 * @n: number of times the number should print
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;
		{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else if (j < i)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
