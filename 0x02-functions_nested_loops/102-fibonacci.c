#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
<<<<<<< HEAD
 *
 * Return: Always 0.
 */
=======
<<<<<<< HEAD
 * Return: Always 0.
 */

=======
 *
 * Return: Always 0.
 */
>>>>>>> 8022036 (14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A)
>>>>>>> master
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

<<<<<<< HEAD
=======
<<<<<<< HEAD
	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
=======
>>>>>>> master
		for (count = 0; count < 50; count++)
		{
			sum = fib1 + fib2;
			printf("%lu", sum);

			fib1 = fib2;
			fib2 = sum;

			if (count == 49)
				printf("\n");
			else
				printf(", ");
		}

		return (0);
<<<<<<< HEAD
=======
>>>>>>> 8022036 (14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A)
>>>>>>> master
}
