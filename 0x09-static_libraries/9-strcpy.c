#include "main.h"

/**
 * *_strcpy - The string to copy a string
 *
 * @dest: Pointer
 * @src: pointer
 *
 * Return: The Return statement will return the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
