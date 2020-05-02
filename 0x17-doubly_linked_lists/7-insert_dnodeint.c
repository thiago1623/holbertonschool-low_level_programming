#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node.
 * @h: Double linked list.
 * @idx: Position
 * @n: New data
 * Return: Address to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = *h, *tmp = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));/*add to beginning*/
	if (!*h || n < 0)/*error check*/
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;/*add the data to we tmp*/

	while (new)
	{
		if (idx == i)/*add by position*/
		{
			tmp->prev = new->prev;
			tmp->next = new;
			new->prev = tmp;
			tmp->prev->next = tmp;
			return (tmp);
		}
		if (!new->next && idx == i + 1)/*add to end*/
			return (free(tmp), add_dnodeint_end(h, n));
		new = new->next;
		i++;
	}
	free(tmp);
	return (NULL);
}
