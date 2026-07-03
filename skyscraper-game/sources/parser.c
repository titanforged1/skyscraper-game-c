//
// Created by sebnem on 7/4/26.
//
#include "../includes/ft.h"

int	*parse_clues(char *str)
{
    int	*clues;
    int	i = 0, count = 0;

    clues = (int *)malloc(sizeof(int) * 16);
    if (!clues)
        return (NULL);
    while (str[i])
    {
        if (str[i] >= '1' && str[i] <= '4')
        {
            if (count >= 16)
                return (free(clues), NULL);
            clues[count++] = str[i] - '0';
        }
        else if (str[i] != ' ')
            return (free(clues), NULL);
        i++;
    }
    if (count != 16)
        return (free(clues), NULL);
    return (clues);
}