#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
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
