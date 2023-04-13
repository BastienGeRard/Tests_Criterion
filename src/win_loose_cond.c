/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** win_loose_cond
*/

#include <stdio.h>
#include "../include/blackjack.h"

static void win_loose_conditions_next(blackjack_t bj)
{
    if (bj.score_player == bj.score_dealer) {
        printf("Egalité, vous gardez votre mise !\n");
    } else {
        printf("Vous avez perdu %.2f!\n", bj.mise);
    }
}

void win_loose_conditions(blackjack_t bj)
{
    if (bj.score_player == 21 && bj.nb_player == 2) {
        bj.mise *= 2.5;
        printf("Blackjack !\n");
        printf("Vous avez gagné %.2f euros !\n", bj.mise);
    } else if ((bj.score_player > bj.score_dealer && bj.score_player <= 21)
    || bj.score_dealer > 21) {
        bj.mise *= 2;
        printf("Vous avez gagné %.2f euros !\n", bj.mise);
    } else {
        win_loose_conditions_next(bj);
    }
}
