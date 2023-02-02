#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 *
 * @head: pointer to the first element in the list
 *
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
ee
	listint_t *temp = *head;
ee
	new = malloc(sizeof(listint_t));
ee
	if (!new)
		return (NULL);

	new->n = n;
ee
	new->next = NULL;
ee
	if (*head == NULL)
	{
		*head = new;
ee
		return (new);
	}
}
