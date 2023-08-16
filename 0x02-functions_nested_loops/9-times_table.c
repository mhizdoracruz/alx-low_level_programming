#include "main.h"
#include <stdio.h>

/**
 * times_table - This is the time table function
 *
 * Return: Always return void
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int result = 9 * i;


		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
		_putchar('\n');
	}
}
