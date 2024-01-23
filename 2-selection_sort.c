#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min = 0, temp = 0;

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
        if ((size_t)min != i)
        {
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
        print_array(array, size);
        }
	}
}
