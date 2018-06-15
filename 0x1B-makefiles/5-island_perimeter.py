#!/usr/bin/python3
'island perimeter program'


def checkPerim(grid, row, col):
    'utility to check for zeroes bordering a 1'
    border = dict(left=grid[row][col - 1],
                  right=grid[row][col + 1],
                  up=grid[row - 1][col],
                  down=grid[row + 1][col])
    total = 0
    for v in border.values():
        total += 1 if v == 0 else 0
#    if border['left'] == 0:
 #       if grid[row - 1][col - 1] == 1 or grid[row + 1][col - 1] == 1:
  #          total -= 1

   # if border['right'] == 0:
    #    if grid[row + 1][col + 1] == 1 or grid[row - 1][col + 1] == 1:
     #       total -= 1

    return total


def island_perimeter(grid):
    'checks for 1 in the grid returns total perimeter'
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += checkPerim(grid, row, col)
    return perimeter
