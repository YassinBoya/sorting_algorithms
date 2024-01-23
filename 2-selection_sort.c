#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp, swapped;

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
                swapped = 1;
            }
		}
        if (swapped == 1)
        {
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
        print_array(array, size);
        swapped = 0;
        }
	}
}
