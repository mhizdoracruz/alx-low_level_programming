#include "main.h"

/**
 * _strcat - the concatenating function
 *
 * @dest: Pointer
 * @src: Pointer
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
