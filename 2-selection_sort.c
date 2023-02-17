#include "sort.h"

/**
 * selection_sort - finds the smallest item in the array and
 * insert it in respective position, move forward one index an
 * and repeat
 *
 * @array: target array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int min, i, j;

	for (i = 0; i < (int) size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < (int) size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		swap(&array[i], &array[min]);
		print_array(array, size);
	}
}
