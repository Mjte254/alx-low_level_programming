#include "lists.h"

/**
<<<<<<< HEAD
 * print_listint - prints all the number of elements in a linked lists
=======
 * print_listint - prints all the elements of a linked list
>>>>>>> bbf389b (0. Print list)
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

<<<<<<< HEAD
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
=======
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
>>>>>>> bbf389b (0. Print list)
	}

	return (num);
}
