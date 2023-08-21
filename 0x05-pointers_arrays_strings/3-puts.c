#include "main.h"

/**
 * _puts - The put funnction
 *
 * @str: The string function
 *
 * Return: This will return void
 */

void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
