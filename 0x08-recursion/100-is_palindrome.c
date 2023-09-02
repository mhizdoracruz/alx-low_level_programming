#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - The function to check the code
 *
 * @s: Character
 * @start: paramter
 * @end: parameter
 *
 * Return: Return 1 if a string is a palindrome and 0 if not
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - The function to check the code
 *
 * @s: Character
 *
 * Return: Return 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, length - 1));
}
