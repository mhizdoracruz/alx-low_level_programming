#include "main.h"

/**
 * print_numbers - The print number function
 *
 * Return: This will return void
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
