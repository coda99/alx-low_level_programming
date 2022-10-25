#include "lists.h"

/**
 * add_nodeint - Adds a new node at the begining of
 * a listint_t list.
 * @head: pointer to the address of the head of the
 * listint_t list
 * @n: The int for new node to comtain
 *
 * Return: Null if fail else address of the new
 * element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
