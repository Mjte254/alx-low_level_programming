<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
=======
<<<<<<< HEAD
#include <unistd.h>

=======
#include "main.h"
#include <unistd.h>
>>>>>>> 9aeefa4 (0)
>>>>>>> master
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
<<<<<<< HEAD
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
=======
<<<<<<< HEAD
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

=======
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 9aeefa4 (0)
>>>>>>> master
int _putchar(char c)
{
	return (write(1, &c, 1));
}
