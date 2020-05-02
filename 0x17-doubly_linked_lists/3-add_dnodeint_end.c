#include "lists.h"

/**
 * add_dnodeint_end - check the code for Holberton School students.
 * @head: the Head of the list
 * @n: The number of the list
 *
 * Return: The new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;
	new->n = n;
	new->next = NULL;
	if (!tmp)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
