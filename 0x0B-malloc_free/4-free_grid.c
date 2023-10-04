#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees the two D array
 * @**grid: holding an integer
 * @height: holding integer
 *
 * Return: free (grid) 0 (Success)
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
