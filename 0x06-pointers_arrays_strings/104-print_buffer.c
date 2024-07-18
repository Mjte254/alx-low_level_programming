#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
=======
>>>>>>> master
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
<<<<<<< HEAD
=======
>>>>>>> 2ea9902 (12. Noise is a buffer, more effective than cubicles or booth walls)
>>>>>>> master
 */

void print_buffer(char *b, int size)
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("% 2", *(b + k));
				else
					printf(" ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
=======
>>>>>>> master
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
<<<<<<< HEAD
=======
>>>>>>> 2ea9902 (12. Noise is a buffer, more effective than cubicles or booth walls)
>>>>>>> master
	}
}
