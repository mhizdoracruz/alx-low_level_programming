#include "main.h"

/**
 * _print_rev_recursion - The reverse function
 *
 * @s: pointer
 *
 * Return: Return the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
