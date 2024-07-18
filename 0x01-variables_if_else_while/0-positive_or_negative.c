<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is positive, negative or 0
 * Return: Always 0
=======
>>>>>>> master
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints if the number is positive,negative or 0
 *Return:Always 0
<<<<<<< HEAD
=======
>>>>>>> 4404490 (0. Positive anything is better than negative nothing)
>>>>>>> master
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
=======
<<<<<<< HEAD

=======
>>>>>>> 4404490 (0. Positive anything is better than negative nothing)
>>>>>>> master
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
