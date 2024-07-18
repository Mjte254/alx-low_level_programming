#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * main - entry point
 *
 * Description: print all possible combinations of two - digit numbers
 *
 * Return: 0 success, non zero fail
 */
int main(void)
{
	int i j;

	for (i = '0'; i <= '99'; i++)
	{
		for (j = '0'; j <= '99'; j++)
		{
			putchar('0' + i / '10');
			putchar('0' + i % '10');

			putchar(' ');

			putchar('0' + j / '10');
			putchar('0' + j % '10');

			if (i == '98' && j == '99')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return ('0');
=======
>>>>>>> master
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
<<<<<<< HEAD
=======
>>>>>>> 527679b (12. Software is eating the World)
>>>>>>> master
}
