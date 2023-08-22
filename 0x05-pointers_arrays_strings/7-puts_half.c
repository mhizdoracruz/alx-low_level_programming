#include "main.h"

/**
 * puts_half - The function that divides a string in half
 *
 * @str: the string pointer
 *
 * Return: The return statement will return void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
