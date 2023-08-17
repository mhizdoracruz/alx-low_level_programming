#include "main.h"
#include <stdio.h>

/**
 * _isupper - This is the uppercase function
 * @c: The interger c
 *
 * Return: always return the c function
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
