#include "main.h"

/**
 * print_diagonal - the print diagonal function
 *
 * @n: the n integer
 *
 * Return: Return void
 */

void print_diagonal(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('\\');
		c++;
	}
	_putchar('\n');
}
