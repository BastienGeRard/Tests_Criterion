/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** scan_choice_player
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/blackjack.h"

char *scan_choice_player(void)
{
    char *input = NULL;
    size_t input_size = 0;

    printf("Voulez-vous tirer une carte (T) ou rester (R)? ");
    if (getline(&input, &input_size, stdin) == -1) {
        printf("\nErreur lors de la lecture de l'entrée.\n");
        return NULL;
    }
    return input;
    free(input);
}
