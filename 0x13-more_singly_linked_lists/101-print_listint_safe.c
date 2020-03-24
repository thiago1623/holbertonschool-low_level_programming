#include "lists.h"
/**
 * print_listint_safe - define function
 * @head: head of linked list
 * Return: what does it return?
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *aux;
	size_t n_node;/*save the  number of nodes in the list*/

	current = head;
	if (current == NULL)
		exit(98);

	n_node = 0;
	while (current)
	{
		aux = current;
		current = current->next;
		n_node++;
		printf("[%p] %d\n", (void *)aux, aux->n);
		if (aux < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (n_node);
}
