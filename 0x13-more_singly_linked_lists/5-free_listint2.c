#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: There will be no return.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tail;
	listint_t *node;

	if (head != NULL)
	{
		node = *head;
		while ((tail = node) != NULL)
		{
			node = node->next;
			free(tail);
		}
		*head = NULL;
	}
}
