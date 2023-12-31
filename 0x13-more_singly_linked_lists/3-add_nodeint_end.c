#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 *
 *
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tail;

	(void)tail;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	tail = *head;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = node;
	}

	return (*head);
}
