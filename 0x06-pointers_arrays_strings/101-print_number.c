#include "main.h"

/**
<<<<<<< HEAD
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
=======
<<<<<<< HEAD
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 * Return: Nothing
=======
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
>>>>>>> 3ef3d12 (9. Numbers have life; they're not just symbols on paper)
>>>>>>> master
 */

void print_number(int n)
{
<<<<<<< HEAD
	unsigned int n1;

	n1 = n;
=======
<<<<<<< HEAD
	unsigned int x;
=======
	unsigned int n1;

	n1 = n;
>>>>>>> 3ef3d12 (9. Numbers have life; they're not just symbols on paper)
>>>>>>> master

	if (n < 0)
	{
		_putchar('-');
<<<<<<< HEAD
=======
<<<<<<< HEAD
		n *= -1;
	}
	x = n;
	if (x / 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
=======
>>>>>>> master
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
<<<<<<< HEAD
=======
>>>>>>> 3ef3d12 (9. Numbers have life; they're not just symbols on paper)
>>>>>>> master
}
