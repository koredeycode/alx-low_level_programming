#!/usr/bin/python3
"""this module contain the island_perimeter function"""
def island_perimeter(arr):
    """This computes the island perimeter"""
    rows = len(arr)
    cols = len(arr[0])
    pt = 0

    for row in range(rows):
        for col in range(cols):
            if arr[row][col] == 1:
                if arr[row - 1][col] == 0 or row - 1 == -1:
                    pt += 1
                if arr[row][col + 1] == 0 or col + 1 == cols:
                    pt += 1
                if arr[row + 1][col] == 0 or row + 1 == rows:
                    pt += 1
                if arr[row][col - 1] == 0 or col - 1 ==  -1:
                    pt += 1
    return (pt)
