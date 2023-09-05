#include "main.h"

/**
 * _strchr - The function to check the code
 *
 * @s: pointer
 * @c: character
 *
 * Return: Return a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
