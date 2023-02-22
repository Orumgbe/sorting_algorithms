#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    int array[1000] = {3};
    size_t n = 1000;

    for (i = 1; i < 1000; i++)
    {
        array[i] = rand() % 1000;
    }

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
