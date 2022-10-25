#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char l;

	while (i >= 0 && i <= 9)
	{
	putchar((i % 10) + '0');
	i++;
	}
	for (l = 'a'; l <= 'f'; l++)
	{
	putchar(l);
	}
	putchar('\n');
	return (0);
}
