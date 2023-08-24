#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @head: head of a linked list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;
	const list_t *ptr = head;
	char *str;
	int len;

	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		count++;
		str = ptr->str;
		len = ptr->len;

		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}

		printf("[%u] %s\n", len, str);
		ptr = ptr->next;
	}

	return (count);
}

