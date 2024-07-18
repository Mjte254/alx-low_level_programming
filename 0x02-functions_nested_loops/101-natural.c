<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> master
/*
 * File: 101-natural.c
 * Auth: vincent kip
 */

<<<<<<< HEAD
=======
>>>>>>> 38d185f (13. Nature made the natural numbers; All else is the work of women)
>>>>>>> master
#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * Return: Always 0.
 *
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
=======
>>>>>>> master
 *
 * Return: Always 0.
 */
int main(void)
{
		int i, sum = 0;

		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum += i;
		}

		printf("%d\n", sum);

		return (0);
<<<<<<< HEAD
=======
>>>>>>> 38d185f (13. Nature made the natural numbers; All else is the work of women)
>>>>>>> master
}
