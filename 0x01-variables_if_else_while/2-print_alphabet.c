#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - print_alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
=======
>>>>>>> master
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
<<<<<<< HEAD
=======
>>>>>>> 603955f (2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game)
>>>>>>> master
	}
	putchar('\n');
	return (0);
}
