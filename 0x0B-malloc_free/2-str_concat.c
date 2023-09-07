#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - To concatenate two strings
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: Return pointer or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result = (char *)malloc(len1 + len2 + 1);

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
        {
		return (NULL);
	}
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
