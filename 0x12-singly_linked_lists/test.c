#include "lists.h"
/**
 * add node - prints a singly linked list
 * @head: head of the linked list
 * @str: string
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	const char *new = strdup(str);
	list_t *temp = malloc(sizeof(head));

