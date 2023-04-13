/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** game_loop
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/blackjack.h"

blackjack_t game_loop(blackjack_t bj)
{
    while (strcmp(bj.choice, "R\n")) {
        bj.choice = scan_choice_player();
        if (bj.choice == NULL) {
            bj.game_over = true;
            break;
        }
        bj = user_pull_card(bj);
        if (check_over_bj(bj.score_player)) {
            bj.game_over = true;
            show_dealer_card(bj);
            printf("Score du croupier: %d\n",
            calcul_score(bj.dealer_card, bj.nb_dealer));
            printf("Vous avez dépassé 21 !\n");
            break;
        }
    }
    return bj;
}
