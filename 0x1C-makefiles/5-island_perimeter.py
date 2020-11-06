#!/usr/bin/python3
"""function that return a perimeter
"""


def island_perimeter(grid):
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i-1][j] == 0:
                    per += 1
                if j - 1 < 0 or grid[i][j-1] == 0:
                    per += 1
                if j + 1 >= len(grid[0]) or grid[i][j+1] == 0:
                    per += 1
                if i + 1 >= len(grid) or grid[i + 1][j] == 0:
                    per += 1
    return per
