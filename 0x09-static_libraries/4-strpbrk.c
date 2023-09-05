#include "main.h"

/**
 * _strpbrk - Check the code
 *
 * @s: character pointer
 * @accept: character pointer
 *
 * Return: Return a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int i;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
