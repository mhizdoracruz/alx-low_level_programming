#include "main.h"

/**
 * wildcmp - The function to check the code
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: Return 1 if the strings can be considered identical otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '\0')
		{
			return (wildcmp(s1 + 1, s2));
		}
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
