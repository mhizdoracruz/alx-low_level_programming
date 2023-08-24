#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - check code
 *
 * @str: pointer
 *
 * Return: return str
 */

char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replacements[] = "4433007711";

	while (*ptr != '\0')
	{
		int i;

		for (i = 0; leet_map[i] != '\0'; i++)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
