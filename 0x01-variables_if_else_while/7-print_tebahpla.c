#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{

	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

=======
>>>>>>> master
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
<<<<<<< HEAD
=======
>>>>>>> 3f7e74e (7. Smile in the mirror)
>>>>>>> master
	return (0);
}
