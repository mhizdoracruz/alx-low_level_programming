#include "main.h"

/**
 * print_rev - The reverse function
 *
 * @s: The s pointer
 *
 * Return: This will return void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
