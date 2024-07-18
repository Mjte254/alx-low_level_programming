<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * main - print the num of args you passed to it
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;

=======
>>>>>>> master
#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
<<<<<<< HEAD
=======
>>>>>>> dac7699 (updated)
>>>>>>> master
	printf("%d\n", argc - 1);

	return (0);
}
