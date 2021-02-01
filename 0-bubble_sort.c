#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending orde
 * order using the Bubble sort algorithm
 * @array: array of integers
 * @size: size of the array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, u;
	int tmp; /* Temporal variable for swap */

	if (size < 2 || array == NULL)
		return;

	j = size;
	while (j > 0)
	{
		u = 0;
		for (i = 0; i < j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				u = i + 1;
				print_array(array, size);
			}
		}
		j = u;
	}
}
