#include "main.h"

/**
 * _isdigit - the isdigit function
 *
 * @c: The values of c
 *
 * Return: Always return 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
