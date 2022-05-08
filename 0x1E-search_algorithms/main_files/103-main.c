#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62));
    printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3));
    /*printf("Found %d at index: %d\n\n", 61, exponential_search(array, size, 61));
    printf("Found %d at index: %d\n\n", 18, exponential_search(array, size, 18));
    printf("Found %d at index: %d\n\n", 0, exponential_search(NULL, 0, 0));
    printf("Found %d at index: %d\n\n", 99, exponential_search(array, size, 99));*/
    printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999));
    return (EXIT_SUCCESS);
}
