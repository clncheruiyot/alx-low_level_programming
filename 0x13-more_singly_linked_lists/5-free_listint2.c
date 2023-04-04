#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function  frees a listint_t list
 * @head: a double pointer lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
