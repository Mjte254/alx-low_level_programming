#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
<<<<<<< HEAD
	if (!new)
=======
<<<<<<< HEAD
	if (new == NULL)
=======
	if (!new)
>>>>>>> 30e8179 (2. Add node)
>>>>>>> master
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

<<<<<<< HEAD
	return (new);
=======
<<<<<<< HEAD
	return (*head);
=======
	return (new);
>>>>>>> 30e8179 (2. Add node)
>>>>>>> master
}
