#include "main.h"

/**
 * reset_to_98 - The reset function
 *
 * @n: pointer
 *
 * Return: The return statement will return void
 */

void reset_to_98(int *n)
{
	int p = 98;

	*n = p;
	_putchar(*n + '0');

}
