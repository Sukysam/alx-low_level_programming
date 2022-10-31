#include "main.h"

/**
 * print_last_digit - Check for the last digit of a number
 * @n: the int in question
 * Return:last digit of a number
 */

int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;
	if (lastD < 0)
		lastD *= -1;
	_putchar(lastD + '0');
	return (lastD);
}
