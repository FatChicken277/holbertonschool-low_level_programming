#!/usr/bin/python3
"""This module contains a method that returns the
    perimeter of the island
"""


def island_perimeter(grid):
    """Returns the perimeter of the island

    Args:
        grid (list): island representation

    Returns:
        int: perimeter of the island
    """
    if len(grid) == 0:
        return
    perimeter = 0
    for j, row in enumerate(grid):
        if j == 0:
            copy_row = grid[0]
        else:
            copy_row = grid[j-1]
        rlen = len(row) - 1
        for i, col in enumerate(row):
            if col == 1:
                if i != rlen and row[i+1] == 0:
                    perimeter += 1
                if i != 0 and row[i-1] == 0:
                    perimeter += 1
        for k in range(rlen):
            if copy_row[k] != row[k]:
                perimeter += 1
    return perimeter
