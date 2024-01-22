#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly
*linked list using the insertion sort algorithm
* @list: Pointer to the head of the linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *currentNode;
	int temp = 0;

	if (list == NULL || *list == NULL)
		return;

	currentNode = *list;

	while (currentNode)
	{
		if (currentNode->next != NULL && currentNode->n > currentNode->next->n)
		{
			temp = currentNode->n;

			*(int *)&currentNode->n = currentNode->next->n;
			*(int *)&currentNode->next->n = temp;

			print_list(*list);
			currentNode = *list;
		}
		else
		{
			currentNode = currentNode->next;
		}
	}
}
