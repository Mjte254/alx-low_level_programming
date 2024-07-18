<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
=======
>>>>>>> master
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

<<<<<<< HEAD
=======
>>>>>>> 40d5813 (0. What's my name)
>>>>>>> master
	f(name);
}
