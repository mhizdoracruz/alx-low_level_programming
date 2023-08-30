#include "main.h"

/**
 * _puts_recursion - The function check the code
 *
 * @s: pointer
 *
 * Return: The string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
