#include "sort.h"

/**
 * quick_sort - entry point for quick-sort
 * @array: array of size number of integers
 * @size: of the array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, (int) size - 1, size);
}

/**
 * qs - short for quicksort , implementation that i can use
 * recursively
 *
 * @array: target array
 * @lo: lower bound
 * @hi: higher bound
 * @size: size of the array
 */
void qs(int *array, int lo, int hi, int size)
{
	int p;

	if (lo >= hi || lo < 0)
		goto end_;

	p = partition(array, lo, hi, size);

	qs(array, lo, p - 1, size);
	qs(array, p + 1, hi, size);

		end_:
	(void) NULL;
}

/**
 * partition - find and sort with respect to the pivot
 * then return the pivot index for partitioning
 *
 * @array: target array
 * @lo: lower bound
 * @hi: higher bound
 * @size: size of the array
 * Return: the pivot point/index
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int j, i;
	int pivot = array[hi]; /*get the value of the pivot element*/

	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		/**
		 * check if the jth element is less than the pivot
		 * then increment i and swap
		 * i is the lagging pointer to keep track of element
		 * bigger than the pivot that might need to be swapped
		 */
		if (array[j] <= pivot)
		{
			i++;

			swap(&array[i], &array[j]);

			if (j > i && )
				print_array(array, size);

		}
	}
	i++;

	/* Swap the pivot element to it correct index */
	swap(&array[i], &array[hi]);
	print_array(array, size);


	/* returns the pivot index */
	return (i);
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
