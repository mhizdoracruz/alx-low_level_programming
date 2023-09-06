#include "main.h"
#include <stdlib.h>

/**
 * create_array - The function to create an array
 * @size: Parameter
 * @c: Character
 *
 * Return: Return NULL or a Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
