#include "main.h"

/**
 * print_square - The print square function
 *
 * @size: The size of the square
 *
 * Return: The will returnn void
 */

void print_square(int size)
{
	int x, y;

	y = 0;
	if (size < 1)
		_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
