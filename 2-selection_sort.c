#include "sort.h"
/**
 *selection_sort- function that sorts using selection sort algorithm
 *
 *@array: array to be sorted
 *@size: size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (!array || !size)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (min = i, j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[i] > array[min])
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
