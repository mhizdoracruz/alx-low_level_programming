#include "main.h"
/**
 * print_alphabet - Prints the lowercase English alphabet.
 *
 * Return: this will return 0
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
