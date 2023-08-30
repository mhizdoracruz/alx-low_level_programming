#include "main.h"

/**
 * _strlen_recursion - The function to check the length of a string
 *
 * @s: pointer
 *
 * Return: return the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1) + _strlen_recursion(s + 1);
}
