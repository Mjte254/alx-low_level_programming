#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - prints single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

=======
>>>>>>> master
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
<<<<<<< HEAD
=======
>>>>>>> e8152d9 (6. Numberz)
>>>>>>> master
	return (0);
}
