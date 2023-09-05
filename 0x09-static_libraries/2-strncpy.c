#include "main.h"

/**
 * _strncpy - The Function to copy a string
 *
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: Return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
