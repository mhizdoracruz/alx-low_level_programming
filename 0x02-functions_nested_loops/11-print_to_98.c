#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This will the values from 0 to 98
 *
 * @n: the parameter
 *
 * Return: Always return 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
