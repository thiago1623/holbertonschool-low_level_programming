#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data `n` of a `dlistint_t` LL
 * @head: head of doubly LL
 * Return: sum of all `n` or 0 if LL is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!tmp)
		return (0);
	while (tmp)
	{
		sum += tmp->n;/*data access*/
		tmp = tmp->next;/*we iterate the data one by one*/
	}
	return (sum);
}
