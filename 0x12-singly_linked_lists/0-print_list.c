#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: head of the linked list
 *
 * Return: the number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t const *ptr = h;

	if (h == NULL)
		printf("[0] (nil)\n");

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
