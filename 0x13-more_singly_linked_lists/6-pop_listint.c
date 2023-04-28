#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (n);
}
