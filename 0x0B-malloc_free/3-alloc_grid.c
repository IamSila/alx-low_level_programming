#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
    /**
     * define an array to dynamically allocate the memory
     * each element in the grid should be 0
     * the function returns NULL on failure (CHECKED)
     * if width of height is 0, return NULL(CHECKED)
     */
    int **two_d_array;
    int j;
    int w;
    int h;

    two_d_array = malloc(sizeof(int *) * height);
    if (two_d_array == NULL)
    {
        return (NULL);
    }
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    for (h = 0; h < height; h++)
    {
        two_d_array[h] = malloc(width * sizeof(int *));
        if (two_d_array[h] == NULL)
        {
            for (j = 0; j < h; j++)
            {
                free(two_d_array[j]);
            }
            free(two_d_array);
            return (NULL);
        }
        for (w = 0; w < width; w++)
        {
            two_d_array[h][w] = 0;
        }
    }
    return two_d_array;
}
