#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 *
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist,return NULL.
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int loop_counter;

	for (loop_counter = 0; loop_counter < index && head != NULL; loop_counter++)
	{
		head = head->next;
	}

	return (head);
}