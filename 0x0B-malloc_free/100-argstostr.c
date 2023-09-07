#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - To check the code
 *
 * @ac: Parameter
 * @av: Pointer
 *
 * Return: Return the argument
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_length = 0;
	char *result = (char *)malloc(total_length + 1);
	int pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			int arg_length = strlen(av[i]);
			strcpy(result + pos, av[i]);
			pos += arg_length;
			result[pos] = '\n';
			pos++;
		}
	}
	result[total_length] = '\0';
	return (result);
}
