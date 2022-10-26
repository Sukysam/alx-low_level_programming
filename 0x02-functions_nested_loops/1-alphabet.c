#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar((l % 10) + '0');
	_putchar('\n');
	}
	return (0);
}
