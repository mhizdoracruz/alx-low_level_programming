#include "main.h"

/**
 * swap_int - The swap function
 *
 * @a: the a pointer
 * @b: the b pointer
 *
 * Return: The return statement will return void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
