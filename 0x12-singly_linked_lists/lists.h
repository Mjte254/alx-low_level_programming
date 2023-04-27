<<<<<<< HEAD
#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
=======
#ifndef LISTS_H
#define LISTS_H
>>>>>>> 141e6dc (0. Print list)

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
<<<<<<< HEAD
 * Description: singly linked list node structure
 * for Holberton project
 */

=======
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
>>>>>>> 141e6dc (0. Print list)
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

<<<<<<< HEAD

#endif /* _LISTS_ */
=======
#endif
>>>>>>> 141e6dc (0. Print list)
