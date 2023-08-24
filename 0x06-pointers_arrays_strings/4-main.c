#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	reverse_array(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
