#include "main.h"

/**
 * print_times_table - This the time table function
 *
 * @n: the n parameter
 *
 * Return: this will return void
 */

void print_times_table(int n)
{
	int a = 0, result, b;

	if (n > 15 || n < 0)
	{
		return;
	}
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			if (b == 0)
				_putchar('0' + result);
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar('0' + (result / 100));
				_putchar('0' + (result - 100) / 10);
				_putchar('0' + (result % 10));
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
