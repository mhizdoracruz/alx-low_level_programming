#include "main.h"

/**
 * print_array - The functionn to print an array
 *
 * @a: the a pointer
 * @n:The n parameter
 *
 * Return: The return statement will return void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
