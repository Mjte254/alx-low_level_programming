#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints all strings from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

=======
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
>>>>>>> e21df4c (5. Numbers)
	return (0);
}
