/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** user_pull_card
*/

#include <stdio.h>
#include "../include/blackjack.h"

blackjack_t user_pull_card(blackjack_t bj)
{
    if (bj.choice == 'T') {
        bj.player_card[bj.nb_player] = pull_card();
        bj.nb_player++;
        bj.score_player = calcul_score(bj.player_card, bj.nb_player);
        printf("Votre main: ");
        for (int i = 0; i < bj.nb_player; i++) {
            printf("%d ", bj.player_card[i]);
        }
        printf("\n");
    }
    return bj;
}
