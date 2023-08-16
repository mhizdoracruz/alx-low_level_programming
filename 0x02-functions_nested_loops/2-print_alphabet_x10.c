#include "main.h"

/**
 * print_alphabet_x10 - This is to print 10_x
 *
 * Return: this will return the value 0
 */

void print_alphabet_x10(void)
{
	int repeat;
	char letter = 'a';

	for (repeat = 0; repeat < 10; repeat++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
