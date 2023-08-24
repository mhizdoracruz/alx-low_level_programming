#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * rot13 - To encode a string
 *
 * @str: pointer
 *
 * Return: Return str
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		char base = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';

		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			*ptr = ((*ptr - base + 13) % 26) + base;
		}
		ptr++;
	}
	return (str);
}
