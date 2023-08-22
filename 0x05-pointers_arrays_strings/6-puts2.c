#include "main.h"

/**
 * put2 - The function to print every other character of a string
 *
 * @str: The string pointer
 *
 * Return: The return statement will return void
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
