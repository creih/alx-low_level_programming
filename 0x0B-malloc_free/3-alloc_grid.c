#include<stdlib.h>
/**
 * alloc_grid - allocate memory fr 2dim array
 * @width: dim1 of array
 * @height: dim2 of array
 * Return: pointer to str if successfull els NULL
 */
int **alloc_grid(int width, int height)
{
	int **num, x = 0, y = 0;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	num = malloc(sizeof(int *) * height);
	if (num == NULL)
	{
		return (NULL);
	}
	while (y < height)
	{
		num[y] = malloc(sizeof(int) * width);
		if (num[y] == NULL)
		{
			while (x < y)
			{
				free(num[x]);
				x++;
			}
			free(num);
			return (NULL);
		}
		while (x < width)
		{
			num[y][x] = 0;
			x++;
		}
		y++;
	}
	return (num);
}
