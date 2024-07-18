<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
=======
>>>>>>> master
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
<<<<<<< HEAD
=======
>>>>>>> 718232b (1. List length)
>>>>>>> master
}
