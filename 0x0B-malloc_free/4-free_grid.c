#include <stdlib.h>

/**
 * free_grid - free previously allocated memory
 *
 * @grid: grid from previous task
 * @height: height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
