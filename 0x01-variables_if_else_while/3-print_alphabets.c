#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - prints alpha in lower case and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

=======
>>>>>>> master
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
<<<<<<< HEAD
=======
>>>>>>> 1e1fe67 (3. alphABET)
>>>>>>> master
	putchar('\n');
	return (0);
}
