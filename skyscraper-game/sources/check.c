//
// Created by sebnem on 7/4/26.
//
#include "../includes/ft.h"

int	check_col_up(int grid[4][4], int col, int expected)
{
    int	i = 0, max = 0, vis = 0;
    while (i < 4)
    {
        if (grid[i][col] > max)
        {
            max = grid[i][col];
            vis++;
        }
        i++;
    }
    return (vis == expected);
}

int	check_col_down(int grid[4][4], int col, int expected)
{
    int	i = 3, max = 0, vis = 0;
    while (i >= 0)
    {
        if (grid[i][col] > max)
        {
            max = grid[i][col];
            vis++;
        }
        i--;
    }
    return (vis == expected);
}

int	check_row_left(int grid[4][4], int row, int expected)
{
    int	j = 0, max = 0, vis = 0;
    while (j < 4)
    {
        if (grid[row][j] > max)
        {
            max = grid[row][j];
            vis++;
        }
        j++;
    }
    return (vis == expected);
}

int	check_row_right(int grid[4][4], int row, int expected)
{
    int	j = 3, max = 0, vis = 0;
    while (j >= 0)
    {
        if (grid[row][j] > max)
        {
            max = grid[row][j];
            vis++;
        }
        j--;
    }
    return (vis == expected);
}

int	is_grid_valid(int grid[4][4], int *clues)
{
    int	i = 0;
    while (i < 4)
    {
        if (!check_col_up(grid, i, clues[i]) ||
            !check_col_down(grid, i, clues[i + 4]) ||
            !check_row_left(grid, i, clues[i + 8]) ||
            !check_row_right(grid, i, clues[i + 12]))
            return (0);
        i++;
    }
    return (1);
}