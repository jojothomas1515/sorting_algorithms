#include "sort.h"

/**
 * bubble_sort - worst sorting algorithm used mainly
 * for education purpose
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, t = 1, swapped = 0;

	while (t)
	{
		swapped = 0;
		for (i = 0; i < (int) size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				swapped = 1;
			}

		}

		if (swapped == 0)
			t = 0;
	}
}

/**
 * swap - swap two integers
 * @a: first int
 * @b: second int
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
