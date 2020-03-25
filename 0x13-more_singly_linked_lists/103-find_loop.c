#include "lists.h"
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head, *aux;

	if (current == NULL)
		return (0);

	if (current == current->next)
		return (current);

	while (current != NULL)
	{
		aux = head;
		current = current->next;
		while (aux != current && current != NULL)
		{
			aux = aux->next;
			if (current->next == current)
				return (current);
			if (current->next == aux)
				return (aux);
		}
	}
	return (current);
}
