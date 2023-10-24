#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 *
 * @head: head of a list.
 *
 * Return: head node's data.
 *
 */


int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *a;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;

	head_node = current_node->n;

	a = current_node->next;

	free(current_node);

	*head = a;

	return (head_node);
}
