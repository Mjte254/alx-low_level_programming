#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
=======
>>>>>>> master
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
<<<<<<< HEAD
=======
>>>>>>> 4b8dae8 (4. I can only go one way. I've not got a reverse gear)
>>>>>>> master

	_putchar('\n');
}
