<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);
=======
>>>>>>> master
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;
<<<<<<< HEAD
=======
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

<<<<<<< HEAD
=======
<<<<<<< HEAD
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
=======
>>>>>>> master
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
<<<<<<< HEAD
=======
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master
	{
		printf("Error\n");
		exit(99);
	}

<<<<<<< HEAD
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
=======
<<<<<<< HEAD
	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
=======
	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master
	{
		printf("Error\n");
		exit(100);
	}

<<<<<<< HEAD
	printf("%d\n", get_op_func(op)(num1, num2));
=======
<<<<<<< HEAD
	result = func(arg1, arg2);

	printf("%d\n", result);
=======
	printf("%d\n", get_op_func(op)(num1, num2));
>>>>>>> 5b9c6cf (3. A goal is not always meant to be reached, it often serves simply as something to aim at)
>>>>>>> master

	return (0);
}
