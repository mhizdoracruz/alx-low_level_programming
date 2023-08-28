#include "main.h"

/**
 * _strspn - The function to check the code
 *
 * @s: pointer
 * @accept: character
 *
 * Return: Return the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		int i;

		found = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
