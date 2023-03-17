#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
=======
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
>>>>>>> 1c11580 (9. Patience, persistence and perspiration make an unbeatable combination for success)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
