#include "main.h"

/**
 * string_toupper - The Function that changes all lowercase of a string to uppercase
 *
 * @str: Pointer
 *
 * Return: Return the string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A'; 
		}
		ptr++;
	}
	return (str);
}
