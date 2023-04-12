/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** game_loop
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/blackjack.h"

blackjack_t game_loop(blackjack_t bj)
{
    while (bj.choice != 'R') {
        if (scan_choice_player(&bj) == 1) {
            bj.game_over = true;
            break;
        }
        bj = user_pull_card(bj);
        if (check_over_bj(bj.score_player)) {
            bj.game_over = true;
            printf("Vous avez dépassé 21 !\n");
            break;
        }
    }
    return bj;
}
