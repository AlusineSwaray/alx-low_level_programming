#include "lists.h"
/**
 * list_len - prints a singly linked list
 * @h: head of the linked list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t const *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
