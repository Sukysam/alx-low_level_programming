#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character to stdio
 * @c: veraible representing value
 *
 * Return: return 1
 * error: -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
