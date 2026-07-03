#include "../includes/ft.h"

int main(int argc, char **argv)
{
	int	grid[4][4] = {0};
	int	*clues;

	if (argc != 2) return (print_error(), 1);
	clues = parse_clues(argv[1]);
	if (!clues) return (print_error(), 1);
	if (solve_skyscraper(grid, clues, 0, 0))
		print_grid(grid);
	else
		print_error();
	free(clues);
	return (0);
}