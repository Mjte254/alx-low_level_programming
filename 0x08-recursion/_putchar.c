<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c in stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

=======
>>>>>>> master
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD
=======
>>>>>>> b9900ae (0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget)
>>>>>>> master
int _putchar(char c)
{
	return (write(1, &c, 1));
}
