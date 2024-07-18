#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: no return.
 */

void _print_rev_recursion(char *s);
{
	if (*s != '\0')
=======
>>>>>>> master
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
<<<<<<< HEAD
=======
>>>>>>> 2b8c813 (1. Why is it so important to dream? Because, in my dreams we are together)
>>>>>>> master
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
