<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints list.
 * @h: param list
 * Return: struct
 */

size_t print_list(const list_t *h)
{
	size_t l_node;

	l_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		l_node++;
	}
	return (l_node);
=======
>>>>>>> master
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
<<<<<<< HEAD
=======
>>>>>>> 141e6dc (0. Print list)
>>>>>>> master
}
