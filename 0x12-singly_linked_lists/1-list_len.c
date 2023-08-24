#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @head: head of a linked list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;
	const list_t *ptr = head;

	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}

