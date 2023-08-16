#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - This will print the last three digits of a number.
 *
 * @n: This is the parameter
 *
 * Return:
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
