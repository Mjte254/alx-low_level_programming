#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - print 0123456789
 * owned by Bwave ICT
 * Return: void
=======
 * print_numbers - print 0-9
 * return: void
>>>>>>> 4133f29 (3. The numbers speak for themselves)
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
