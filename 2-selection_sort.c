#include "sort.h"

/**
 * selection_sort - sorts an array of integers using the Selection sort algo.
 * @array: array
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, a = 0, x = 1, z = 1;
	int min = 0, aux = 0;

	if (size < 2 || array == NULL)
		return;

	for (a = 0; a < size - 1; a++)
	{
		z = 0;
		aux = array[a];
		for (i = x; i < size; i++)
		{
			if (array[a] > array[i])
			{
				z = 1;
				min = i;
				array[a] = array[i];
			}
		}
		array[min] = aux;
		if (z == 1)
			print_array(array, size);
		x++;
	}
}
