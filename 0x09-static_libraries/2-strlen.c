#include "main.h"
#include <string.h>

/**
 * _strlen - The string function
 *
 * @s: The s pointer
 *
 * Return: This will return 0
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
