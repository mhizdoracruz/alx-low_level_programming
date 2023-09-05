#include "main.h"

/**
 * _memset - The function to check the code
 *
 * @s: pointer
 * @b: parameter
 * @n: parameter
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
