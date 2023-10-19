#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Add new node to the beginning of a list
  * @head: The head of a linked list
  * @str: String to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tail;

	if (head != NULL && str != NULL)
	{
		tail = malloc(sizeof(list_t));
		if (tail == NULL)
			return (NULL);

		tail->str = strdup(str);
		tail->len = _strlen(str);
		tail->next = *head;

		*head = tail;

		return (tail);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
