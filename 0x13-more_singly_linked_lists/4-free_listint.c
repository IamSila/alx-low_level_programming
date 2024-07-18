#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: head of a list.
 *
 * Return: There is no return value.
 *
 */


void free_listint(listint_t *head)
{
	listint_t *tail;

	while ((tail = head) != NULL)
	{
		head = head->next;
		free(tail);
	}
}
