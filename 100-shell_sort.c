#include "sort.h"

/**
 * shell_sort - knuth squence implementation
 * @array: array
 * @size: size
 */
void shell_sort(int *array, size_t size)
{
	int h = 1;
	int outer, inner, temp;

	while ((size_t) h < size / 3)
		h = h * 3 + 1;

	(void) array;

	while (h > 0)
	{
		for (outer = h; outer < (int) size; outer++)
		{
			temp = array[outer];
			inner = outer;

			while (inner > h - 1 && array[inner - h] >= temp)
			{
				array[inner] = array[inner - h];
				inner = inner - h;

			}
			array[inner] = temp;
			print_array(array, size);

		}

		h = (h - 1) / 3;

	}

}