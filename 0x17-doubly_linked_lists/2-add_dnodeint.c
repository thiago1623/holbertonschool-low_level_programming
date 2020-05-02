#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a `dlistint_t` list
 * @head: double pointer to head node
 * @n: value to store in node
 * Return: address of new node, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	tmp = *head;
	if (!new)
		return (NULL);

	new->n = n;
	if (!tmp)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp->prev = new;
	new->prev = NULL;
	*head = new;
	new->next = tmp;
	return (new);
}
