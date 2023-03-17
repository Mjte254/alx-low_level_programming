#include <stdio.h>
<<<<<<< HEAD
/**
 * main - program entry point
 *
 * Return: 0 success, non zero fail
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 10 ; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i != 18 || j != 19)
=======

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
>>>>>>> f0f4bfd (10. Inventing is a combination of brains and materials. The more brains you use, the less material you need)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
