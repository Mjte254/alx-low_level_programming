<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "main.c"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
=======
>>>>>>> master
#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
<<<<<<< HEAD
=======
>>>>>>> e0a382b (6. Chess is mental torture)
>>>>>>> master

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
<<<<<<< HEAD
			_putchar(a[i][j]);
=======
<<<<<<< HEAD
		{
			_putchar(a[i][j]);
		}
=======
			_putchar(a[i][j]);
>>>>>>> e0a382b (6. Chess is mental torture)
>>>>>>> master
		_putchar('\n');
	}
}
