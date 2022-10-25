#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d1 = 0;
	
	for (d1 = '0'; d1 <= '9'; d1++)
	{
	putchar(d1);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
