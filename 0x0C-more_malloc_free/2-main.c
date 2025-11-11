#include <stdio.h>
#include <stdlib.h>


/**
 * main - checks the code
 * Return: is Always 0
 */

int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
}