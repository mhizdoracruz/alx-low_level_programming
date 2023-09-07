#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Toc heck the code
 *
 * @width:Parameter
 * @height: Parameter
 *
 * Return: Return 0 if width and height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid = (int **)malloc(height * sizeof(int *));

	 if (width <= 0 || height <= 0)
		 return (NULL);
	 if (grid == NULL)
		 return (NULL);
	 for (i = 0; i < height; i++)
	 {
		 grid[i] = (int *)malloc(width * sizeof(int));
		 if (grid[i] == NULL)
		 {
			 for (j = 0; j < i; j++)
				 free(grid[j]);
			 free(grid);
			 return (NULL);
		 }
		 for (j = 0; j < width; j++)
			 grid[i][j] = 0;
	 }
	 return (grid);
}
