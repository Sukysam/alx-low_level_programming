#include "main.h"

/**
 * print_sign - to check if 'n' is greater, less and equal 0
 * @n: is the char to be checked
 * Return: 1 if n is greater than zero,
 * 0 when n is zero and
 * -1 when n is less than
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
