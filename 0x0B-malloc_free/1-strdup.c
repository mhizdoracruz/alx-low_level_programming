#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Check the code
 *
 * @str: Pointer
 *
 * Return: Return NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
