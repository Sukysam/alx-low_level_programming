#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	if (n > 0)
	{
	printf("The number is greater than zero\n");
	}
	else if (n == 0)
	{
	printf("The number is zero\n");
	}
	else
	{
	printf("The number is less than zero\n");
	}
	return(0);
}
