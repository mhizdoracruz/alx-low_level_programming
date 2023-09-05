#include "main.h"

/**
 * _memcpy - The function to copy memory area
 *
 * @dest: pointer of the destination memory
 * @src: pointer of the source memory
 * @n: parameter for the number of byte
 *
 * Return: Return a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
