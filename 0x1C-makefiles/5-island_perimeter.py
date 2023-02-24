#!/usr/bin/python3
"""5-island_perimeter"""

def island_perimeter(grid):
    """that returns the perimeter of the island described in grid:
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    sum_ = []
    a = 0
    for row in grid:
        for col in row:
            if grid[row][col] == 1:
                f
    return len(sum_) * 4
