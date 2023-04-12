/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** scan_choice_player
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/blackjack.h"

int scan_choice_player(blackjack_t *bj)
{
    char *input = malloc(sizeof(char) * 100);

    if (input == NULL) {
        printf("Error allocation memory.\n");
        return 1;
    }
    printf("Voulez-vous tirer une carte (T) ou rester (R)? ");
    fgets(input, sizeof(input), stdin);
    if (sscanf(input, " %1c", &bj->choice) != 1) {
        printf("Entrée invalide.\n");
        free(input);
        return 1;
    }
    free(input);
    return 0;
}
