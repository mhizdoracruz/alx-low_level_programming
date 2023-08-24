#include "main.h"

/**
 *  _strcmp - The function to compare two strings
 *
 *  @s1: pointer
 *  @s2: pointer
 *
 *  Return: Return the strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
	{
		return (-15);
	}
	else if (*s1 > *s2)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
