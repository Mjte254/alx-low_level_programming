#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * print_to_98 - print all numbers from input to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
=======
>>>>>>> master
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
	void print_to_98(int n)
	{
		int i, j;

		if (n <= 98)
		{
			for (i = n; i <= 98; i++)
			{
				if (i != 98)
					printf("%d, ", i);
				else if (i == 98)
					printf("%d\n", i);

		}
		}
		else if (n >= 98)
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					printf("%d, ", j);
				else if (j == 98)
					printf("%d\n", j);
			}
		}
<<<<<<< HEAD
=======
>>>>>>> 586d15e (11. 98 Battery Street, the OG)
>>>>>>> master
}
