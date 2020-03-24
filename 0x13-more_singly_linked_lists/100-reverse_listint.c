#include "lists.h"
/**
 * reverse_listint - define function
 * @head: describe argument
 * Return: what does it return?
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *nextnode = NULL;

	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		if (nextnode)
			*head = nextnode;
		else
			break;
	}
	return (*head);
}
