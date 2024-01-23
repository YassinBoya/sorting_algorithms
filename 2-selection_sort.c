#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

    if (!array)
    return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
            if (array[min] > array[j])
            {
                min = j;
            }
		}
        if (min != i)
        {
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
        print_array(array, size);
        }
	}
}
