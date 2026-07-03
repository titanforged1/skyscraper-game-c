//
// Created by sebnem on 7/4/26.
//

#ifndef SKYSCRAPER_GAME_FT_H
#define SKYSCRAPER_GAME_FT_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_error(void);
void	print_grid(int grid[4][4]);
int		check_col_up(int grid[4][4], int col, int expected);
int		check_col_down(int grid[4][4], int col, int expected);
int		check_row_left(int grid[4][4], int row, int expected);
int		check_row_right(int grid[4][4], int row, int expected);
int		is_grid_valid(int grid[4][4], int *clues);
int		is_safe(int grid[4][4], int row, int col, int num);
int		solve_skyscraper(int grid[4][4], int *clues, int row, int col);
int		*parse_clues(char *str);
#endif //SKYSCRAPER_GAME_FT_H
