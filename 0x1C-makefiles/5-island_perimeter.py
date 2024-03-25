#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of int): Represents the island grid.

    Returns:
    - int: The perimeter of the island.

    Constraints:
    - Grid is rectangular with width and height not exceeding 100.
    - Grid is completely surrounded by water, and there is only 
    - The island doesn’t have lakes
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
