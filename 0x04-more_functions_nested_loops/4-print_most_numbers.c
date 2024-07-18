#include "main.h"

/**
<<<<<<< HEAD
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
=======
<<<<<<< HEAD
 * print_most_numbers - prints
 * Return: void
=======
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
>>>>>>> 2cb051f (4. I believe in numbers and signs)
>>>>>>> master
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
