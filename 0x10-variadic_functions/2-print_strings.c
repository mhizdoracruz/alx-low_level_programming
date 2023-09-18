#include "variadic_functions.h"
#include <stdio.h>

/**
 *  print_strings -  To chech the code
 *
 *  @separator: Pointer
 *  @n: Parameter
 *
 *  Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;
	
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
