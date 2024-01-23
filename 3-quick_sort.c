#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 * Quick Sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */

void quick_sort(int *array, size_t size)
{
if (array == NULL || size <= 1)
return;

quicksort_rec(array, size, 0, size - 1);
}

/**
 * quicksort_rec - Recursive helper function for Quick Sort
 * @arr: The array to be sorted
 * @size: The size of the array
 * @low: The index of the low end of the sub-array
 * @high: The index of the high end of the sub-array
 */

void quicksort_rec(int *arr, size_t size, int low, int high)
{
int pivot_index;

if (low < high)
{
pivot_index = partition(arr, size, low, high);

quicksort_rec(arr, size, low, pivot_index - 1);
quicksort_rec(arr, size, pivot_index + 1, high);
}
}

/**
 * partition - Partition the array and return the pivot index
 * @arr: The array to be sorted
 * @size: The size of the array
 * @low: The index of the low end of the sub-array
 * @high: The index of the high end of the sub-array
 * Return: The index of the pivot after partitioning
 */

int partition(int *arr, size_t size, int low, int high)
{
int pivot = arr[high];
int j, i = low - 1;

for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
i++;
swap(arr, size, &arr[i], &arr[j]);
}
}
swap(arr, size, &arr[i + 1], &arr[high]);
return (i + 1);
}

/**
 * swap - Swap two elements in an array
 * @array: The array to be sorted
 * @size: The size of the array
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */

void swap(int *array, size_t size, int *a, int *b)
{
if (*a != *b)
{
int temp = *a;
*a = *b;
*b = temp;
print_array(array, size);
}
}
