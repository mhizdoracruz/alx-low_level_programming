#include "main.h"

/**
 * print_most_numbers - The print number function
 *
 * Return: This will return void
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
