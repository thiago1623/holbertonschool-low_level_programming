#include "lists.h"
/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *delate_n, *current = *head;

	if (head == NULL)
		return (0);

	delate_n = current;

	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(delate_n);
	}
	else
		i = 0;
	return (i);
}
