<<<<<<< HEAD
=======
<<<<<<< HEAD
/*
 * file: 0-puts_recursion.c
 * Auth: sam
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new file.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
=======
>>>>>>> master
#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
<<<<<<< HEAD
=======
>>>>>>> b9900ae (0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget)
>>>>>>> master
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
<<<<<<< HEAD

=======
<<<<<<< HEAD
=======

>>>>>>> b9900ae (0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget)
>>>>>>> master
	else
		_putchar('\n');
}
