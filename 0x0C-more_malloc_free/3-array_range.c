#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - To check the code
 *
 * @min: Parameter
 * @max: Parameter
 *
 * Return: Return an integer
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
