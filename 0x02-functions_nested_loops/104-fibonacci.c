#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{

	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
=======
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
		unsigned long int i;
		unsigned long int bef = 1;
		unsigned long int aft = 2;
		unsigned long int l = 1000000000;
		unsigned long int bef1;
		unsigned long int bef2;
		unsigned long int aft1;
		unsigned long int aft2;

		printf("%lu", bef);

		for (i = 1; i < 91; i++)
		{
			printf(", %lu", aft);
			aft += bef;
			bef = aft - bef;
		}

		bef1 = (bef / l);
		bef2 = (bef % l);
		aft1 = (aft / l);
		aft2 = (aft % l);

		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", aft1 + (aft2 / l));
			printf("%lu", aft2 % l);
			aft1 = aft1 + bef1;
			bef1 = aft1 - bef1;
			aft2 = aft2 + bef2;
			bef2 = aft2 - bef2;
		}
		printf("\n");
		return (0);
>>>>>>> a3c0a2b (16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+)
}
