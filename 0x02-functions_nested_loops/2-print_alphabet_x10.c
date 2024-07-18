#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * print_alphabet_x10 - print 10 time the alphabet, in lowercase
 *
 **/

void print_alphabet_x10(void)
{
	int  count = 0;

	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
=======
>>>>>>> master
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

		while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
<<<<<<< HEAD
=======
>>>>>>> f0f05a8 (2. 10 x alphabet)
>>>>>>> master
	}
}
