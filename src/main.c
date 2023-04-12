/*
** EPITECH PROJECT, 2023
** Init-Repo [WSL : Ubuntu-20.04]
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/blackjack.h"

static void print_usage(void)
{
    printf("USAGE\n");
    printf("\t./blackjack bet\n");
    printf("\nDESCRIPTION\n");
    printf("\tbet\tinitial bet\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        print_usage();
    } else if (ac == 2) {
        my_blackjack(atof(av[1]));
    } else {
        printf("Error: invalid number of arguments.\n");
        return 84;
    }
    return 0;
}
