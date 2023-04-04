#include "lists.h"

/**
 * listint_len - number of elements this linked listint_t list.
 *
 * h: head pointer
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
	h = h->next;
		cont++;
	}
	return (cont);
}
