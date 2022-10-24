#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';

	for  (; l <= 'z'; l++)
	{
	if (l == 'e')
	{
	continue;
	}
	else if (l == 'q')
	{
	continue;
	}
	putchar(l);
	}
	putchar('\n');
	return (0);
}
