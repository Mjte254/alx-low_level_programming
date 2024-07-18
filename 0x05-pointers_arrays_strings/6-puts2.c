#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * puts2 - prints every other character of a string
 * @str: char to check
 * Return: 0 is success
 */

void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
=======
>>>>>>> master
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
<<<<<<< HEAD
=======
>>>>>>> b68b69a (6. Half the lies they tell about me aren't true)
>>>>>>> master
	_putchar('\n');
}
