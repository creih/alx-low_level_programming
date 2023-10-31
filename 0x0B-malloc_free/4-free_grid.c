#include <stdlib.h>
/**
 * free_grid - frees memory allocated
 * @grid: speecifies the grid memory to be freed
 * @height: how many columns in grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
