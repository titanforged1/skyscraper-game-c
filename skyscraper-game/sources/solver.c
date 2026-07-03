//
// Created by sebnem on 7/4/26.
//
#include "../includes/ft.h"

int	is_safe(int grid[4][4], int row, int col, int num)
{
    int	x = 0;
    while (x < 4)
    {
        if (grid[row][x] == num || grid[x][col] == num)
            return (0);
        x++;
    }
    return (1);
}

int	solve_skyscraper(int grid[4][4], int *clues, int row, int col)
{
    int	num;

    if (row == 4)
        return (is_grid_valid(grid, clues));
    if (col == 4)
        return (solve_skyscraper(grid, clues, row + 1, 0));
    num = 1;
    while (num <= 4)
    {
        if (is_safe(grid, row, col, num))
        {
            grid[row][col] = num;
            if (solve_skyscraper(grid, clues, row, col + 1))
                return (1);
            grid[row][col] = 0;
        }
        num++;
    }
    return (0);
}