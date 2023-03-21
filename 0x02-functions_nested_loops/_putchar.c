#include "main.h"
#include <unistd.h>
<<<<<<< HEAD

/**
 *
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1,));
=======
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> 2701cbe (0. _putchar)
}
