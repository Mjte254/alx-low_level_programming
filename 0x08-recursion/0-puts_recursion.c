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
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
