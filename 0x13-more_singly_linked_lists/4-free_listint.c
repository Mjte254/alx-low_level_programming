#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
<<<<<<< HEAD
 *
 * Return: return nothing
=======
>>>>>>> dc46df8 (4. Free list)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

<<<<<<< HEAD
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
=======
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
>>>>>>> dc46df8 (4. Free list)
	}
}
