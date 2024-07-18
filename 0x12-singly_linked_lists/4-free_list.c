<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list_t list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
=======
>>>>>>> master
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
<<<<<<< HEAD
=======
>>>>>>> f3b14d2 (4. Free list)
>>>>>>> master
	}
}
