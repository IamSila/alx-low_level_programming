#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the function alloc_grid
 * @grid: the memory to be freed
 * @height: the number of arrays inside
 * Return - Nothing
 */

void free_grid(int **grid, int height)
{
    int index;

    for (index = 0; index <= height; index++)
    {
        free(grid[index]);
    }
    free(grid);
}
