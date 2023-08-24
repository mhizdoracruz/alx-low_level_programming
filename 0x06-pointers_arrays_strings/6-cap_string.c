#include "main.h"
#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>

/**
 * is_separator - check code
 *
 * @c: character
 *
 * Return: the string str
 */

bool is_separator(char c)
{
	char separators[] = "\t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}
/**
 * cap_string - check the code
 *
 * @str: pointer
 *
 * Return: return str
 */
char *cap_string(char *str)
{
	bool new_word = true;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			new_word = true;
		}
		else if (new_word && islower(*ptr))
		{
			*ptr = toupper(*ptr);
			new_word = false;
		}
		else if (!new_word && isupper(*ptr))
		{
			*ptr = tolower(*ptr);
		}
		else
		{
			new_word = false;
		}
		ptr++;
	}
	return (str);
}
