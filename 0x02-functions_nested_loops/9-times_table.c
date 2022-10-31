#include "main.h"

/**
 * times_table - function toprint out all 9 product
 * Return: each product of a multiple
 */

void times_table(void)
{
	int n, nOT, sum;

	for (n = 0; n <= 9; n++)
	{
		for (nOT = 0; nOT <= 9; nOT++)
		sum = n * nOT;
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
