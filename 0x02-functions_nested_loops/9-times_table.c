#include "main.h"
#include <stdio.h>

/**
 * times_table - This is the time table function
 *
 * Return: Always return void
 */

void times_table(void)
{
	int i = 0;
	int j;
	int result;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
