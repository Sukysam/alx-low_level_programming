#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar((l % 10) + '0');
	_putchar('\n');
	}
}
