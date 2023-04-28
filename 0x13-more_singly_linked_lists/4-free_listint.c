#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
