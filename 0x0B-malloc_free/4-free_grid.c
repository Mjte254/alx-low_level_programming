<<<<<<< HEAD
#include "main.h"

/**
 * free_grid - frees a 2d array
 * @grid:memory block to be freed
 * @height:height of the array
 * Return:returns void
 */

=======
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
>>>>>>> 465b117 (4. It's not bragging if you can back it up)
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
<<<<<<< HEAD
		free(grid[i]);

=======
	{
		free(grid[i]);
	}
>>>>>>> 465b117 (4. It's not bragging if you can back it up)
	free(grid);
}
