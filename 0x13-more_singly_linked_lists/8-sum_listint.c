#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
=======
>>>>>>> master
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
<<<<<<< HEAD
=======
>>>>>>> 8049e70 (8. Sum list)
>>>>>>> master
	}

	return (sum);
}
