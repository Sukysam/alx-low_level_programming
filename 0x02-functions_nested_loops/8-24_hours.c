#include "main.h"
/**
 * jack_bauer - function that print out every minute of 24 hrs
 * h = hours, m = minute
 * / 10 allows second digit to rotate
 * for loop breaks before 24:00
 * Return: 24 hours clock line by line
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		}
	}
}
