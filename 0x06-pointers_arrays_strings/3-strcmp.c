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
	int len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	return (len1 - len2);
}
