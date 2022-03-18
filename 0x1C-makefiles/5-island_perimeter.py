#!/usr/bin/python3
"""
Use this module for get the island perimeter
Functions
---------
     insland_perimeter(grid)
"""


def island_perimeter(grid):
    """
    Functions Definition
    Parameters
    ----------
        grid: list
            listi of list of integers
    Return
    ------
        perimeter: int
    """
    perimeter = 0

    for i, arr in enumerate(grid):
        for j, elm in enumerate(arr):
            if elm == 1:
                if i - 1 == -1 or grid[i-1][j] == 0:
                    perimeter += 1
                if j + 1 == len(arr) or grid[i][j+1] == 0:
                    perimeter += 1
                if i + 1 == len(grid) or grid[i+1][j] == 0:
                    perimeter += 1
                if j - 1 == -1 or grid[i][j-1] == 0:
                    perimeter += 1
    return perimeter
