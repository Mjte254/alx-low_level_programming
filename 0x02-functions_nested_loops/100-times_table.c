#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
=======
>>>>>>> master
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
		int i, j, k;

		if (n >= 0 && n <= 15)
		{
			for (i = 0; i <= n; i++)
			{
				for (j = 0; j <= n; j++)
				{
					k = j * i;
					if (j == 0)
					{
						_putchar(k + '0');
					} else if (k < 10 && j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(k + '0');
					} else if (k >= 10 && k < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					} else if (k >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((k / 100) + '0');
						_putchar(((k / 10) % 10) + '0');
						_putchar((k % 10) + '0');
					}
				}
				_putchar('\n');
			}
		}
<<<<<<< HEAD
=======
>>>>>>> 214c293 (12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself)
>>>>>>> master
}
