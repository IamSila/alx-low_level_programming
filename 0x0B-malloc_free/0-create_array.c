#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * crate_array - creates an array of characters
 * @size: the number of characters to create
 * @c: the character to fill the array
 * Return - the string created
 */

char *create_array(unsigned int size, char c)
{
    char *p;
    unsigned int i = 0;

    if (size == 0)
        return (NULL);
    p = malloc(size * sizeof(c));
    if (p == NULL)
    {
        return (0);
    }
    while (i < size)
    {
        *(p + i) = c;
        i++;
    }
    *(p + i) = '\0';
    return (p);
}