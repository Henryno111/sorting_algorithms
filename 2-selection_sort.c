#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *smallest;
	size_t index, b;

	if (array == NULL || size < 2)
		return;

	for (index = 0; index < size - 1; index++)
	{
		smallest = array + index;
		for (b = index + 1; b < size; b++)
			smallest = (array[b] < *smallest) ? (array + b) : smallest;

		if ((array + index) != smallest)
		{
			swap_ints(array + index, smallest);
			print_array(array, size);
		}
	}
}
