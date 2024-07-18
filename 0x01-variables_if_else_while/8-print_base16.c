#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - prints the numbers in base 16
 * Return: Always 0
*/
int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{

		putchar(a);
		a++;
	}
	a = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}

	putchar('\n');

=======
>>>>>>> master
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
<<<<<<< HEAD
=======
>>>>>>> 7063002 (8. Hexadecimal)
>>>>>>> master
	return (0);
}
