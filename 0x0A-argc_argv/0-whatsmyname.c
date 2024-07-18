<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
=======
>>>>>>> master
#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
<<<<<<< HEAD
=======
>>>>>>> dac7699 (updated)
>>>>>>> master

	return (0);
}
