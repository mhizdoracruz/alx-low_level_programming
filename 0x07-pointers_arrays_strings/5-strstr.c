#include "main.h"

/**
 * _strstr - Check the code
 *
 * @haystack: character pointer
 * @needle: character pointer
 *
 * Return: Returns a pointer to the beginning of the located substring or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;

		}
		if (!*n)
		
		{
			return haystack;
		}
		haystack++;
	}
	return (NULL);
}
