#include "main.h"

/**
<<<<<<< HEAD
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
=======
<<<<<<< HEAD
 * rev_string - reverses a string
 * @s: input
 * Return: string in reverse
=======
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
>>>>>>> 872e90d (5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes)
>>>>>>> master
 */

void rev_string(char *s)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
=======
>>>>>>> master
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
<<<<<<< HEAD
=======
>>>>>>> 872e90d (5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes)
>>>>>>> master
	}
}
