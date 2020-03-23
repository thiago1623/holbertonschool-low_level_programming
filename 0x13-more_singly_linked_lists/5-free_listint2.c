#include "lists.h"
/**
 * free_listint2 - Frees a list and sets its head to NULL
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *fr, *current = *head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		fr = current;
		current = current->next;
		free(fr);
	}
	*head = NULL;
}
