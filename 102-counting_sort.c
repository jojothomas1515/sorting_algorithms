#include "sort.h"

/**
 * counting_sort - sorting algorithm using frequencies
 *
 * @array: target array
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int max = 0, i, temp = 0, *farray, *narray;

	if (array == NULL)
		return;

	for (i = 0; (size_t)i < size; i++)
		if (max < array[i])
			max = array[i];

	farray = calloc(max, sizeof(int));
	if (farray == NULL)
		return;
	narray = calloc(size, sizeof(int));
	if (narray == NULL)
		return;

	for (i = 0; (size_t)i < size; i++)
	{
		farray[array[i] - 1] += 1;
	}

	for (i = 0; i <= max; i++)
	{
		farray[i] += temp;
		temp = farray[i];
	}
	print_array(farray, max);

	for (i = 0; (size_t)i < size; i++)
	{
		narray[farray[array[i]] - 1] = array[i];
		farray[array[i] - 1] -= 1;
	}

	free(farray);

	for (i = 0; (size_t)i < size; i++)
		array[i] = narray[i];
	free(narray);
}
