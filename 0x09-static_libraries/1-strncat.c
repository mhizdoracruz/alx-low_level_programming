#include "main.h"

/**
 * _strncat - The function to concatenates two strings
 *
 * @dest: Pointer
 * @src: Pointer
 * @n: Parameter
 *
 * Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
