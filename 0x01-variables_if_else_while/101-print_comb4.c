#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - program entry point
 * Return: 0 success, non zero fail
 */
int main(void)
{
	int m, i j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (i < '&&' j < m)
				{
				putchar(i);
				putchar(j);
				putchar(m);
				{
					if (i == '7' '&&' j == '8' '&&' m == '9')
					{
						break;
						{
							else
							{
							putchar(',');
							putchar(' ');
							}
						}
					}
				}
				}
			}
				putchar('\n');
				return (0);
		}
	}
=======
>>>>>>> master
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
<<<<<<< HEAD
=======
>>>>>>> be23802 (11. The success combination in business is: Do what you do better... and: do more of what you do...)
>>>>>>> master
}
