//
// Created by sebnem on 7/4/26.
//
#include "../includes/ft.h"

void	ft_putchar(char c) { write(1, &c, 1); }

void	ft_putstr(char *str)
{
    int	i = 0;
    while (str[i]) ft_putchar(str[i++]);
}

void	print_error(void) { ft_putstr("Error\n"); }

void	print_grid(int grid[4][4])
{
    int	i = 0, j;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            ft_putchar(grid[i][j] + '0');
            if (j++ < 3) ft_putchar(' ');
        }
        ft_putchar('\n');
        i++;
    }
}