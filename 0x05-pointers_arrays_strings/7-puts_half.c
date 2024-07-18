#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: 0 is success
 */

void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		n = (string - 1) / 2;
	else
		n = (string / 2);
	n++;
	for (string = n; str[string] != '\0'; string++)
		_putchar(str[string]);

=======
>>>>>>> master
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
<<<<<<< HEAD
=======
>>>>>>> 4c81c90 (7. Winning is only half of it. Having fun is the other half)
>>>>>>> master
	_putchar('\n');
}
