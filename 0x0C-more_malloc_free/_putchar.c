<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <unistd.h>

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)

=======
>>>>>>> master
#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
<<<<<<< HEAD
=======
>>>>>>> b7fba2b (5. We must accept finite disappointment, but never lose infinite hope)
>>>>>>> master
{
	return (write(1, &c, 1));
}
