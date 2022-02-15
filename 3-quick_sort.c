#include "sort.h"

/**
 * lomuto_part - quicksort algorithm recursive function
 * @array: array
 * @low: min
 * @high: max
 * @size: size of the array
 *Return: middle
 */

int lomuto_part(int *array, int low, int high, size_t size)
{
	int pivot = 0, left = 0, right = 0, mid = 0;

	left = low;
	pivot = array[high];
	right = high;


	while (right > left)
	{
		while (right > left && array[left] < pivot)
			left++;
		if (left < right)
		{
			array[right] = array[left];
			right--;
		}
		while (left < right && array[right] > pivot)
			right--;
		if (left < right)
		{
			array[left] = array[right];
			left++;
		}
	}
	array[right] = pivot;
	mid = left;
	print_array(array, size + 1);
	return (mid);
}

/**
 * quick_r - quicksort algorithm recursive function
 * @array: array
 * @low: min
 * @high: max
 * @size: size of the array
 */

void quick_r(int *array, int low, int high, size_t size)
{
	int mid = 0;

	if (low < high)
	{
		mid = lomuto_part(array, low, high, size);
		quick_r(array, low, mid - 1, size);
		quick_r(array, mid + 1, high, size);
	}
}

/**
 * quick_sort - quicksort algorithm
 * @array: array
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_r(array, 0, size - 1, size - 1);
}
