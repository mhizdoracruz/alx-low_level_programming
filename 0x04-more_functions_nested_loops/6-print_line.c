#include "main.h"

/**
 * print_line - The print line function
 *
 * @n: The n integer
 *
 * Return: Return voild
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}

