#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {13, 3, 12, 7, 15, 11, 16, 9, 10, 6, 5, 20, 17, 14, 19, 1, 8, 4, 2, 18};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}