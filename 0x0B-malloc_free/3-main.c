#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @heigh: the height of the grid
 *
 * Return: Nothing
 */

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

int **alloc_grid(int width, int height)
{
    /**
     * define an array to dynamically allocate the memory
     * each element in the grid should be 0
     * the function returns NULL on failure (CHECKED)
     * if width of height is 0, return NULL(CHECKED)
     */
    int **two_d_array;

    two_d_array = malloc(sizeof(int *) * height);
    if (two_d_array == NULL)
    {
        return (NULL);
    }
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    for (int h = 0; h < height; h++)
    {
        two_d_array[h] = malloc(width * sizeof(int *));
        if (two_d_array[h] == NULL)
        {
            for (int j = 0; j < h; j++)
            {
                free(two_d_array[j]);
            }
            free(two_d_array);
            return (NULL);
        }
        for (int w = 0; w < width; w++)
        {
            two_d_array[h][w] = 0;
        }
    }
        return two_d_array;
}

/**
 * main - check the code for my function
 *
 * Return: Always 0
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
