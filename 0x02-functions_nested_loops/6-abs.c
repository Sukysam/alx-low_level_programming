#include "main.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: the int in question
 * Return: the abs of the integer
 */

int _abs(int n)
{
	if (n >= 0)

	n = _abs(n);
	_putchar((n % 10) + '0');
}
