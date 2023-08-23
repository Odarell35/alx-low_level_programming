#!/usr/bin/python3
"""Technical interview"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of int): The grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    if not grid:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  

    return perimeter
