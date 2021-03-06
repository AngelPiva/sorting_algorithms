#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 1, i = 0;
	int tmp = 0;

	if (size < 2)
		return;

	while (n == 1)
	{
		n = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				n = 1;
				print_array(array, size);
			}
		}
	}
}
