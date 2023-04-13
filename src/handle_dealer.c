/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** handle_dealer
*/

#include <stdio.h>
#include "../include/blackjack.h"

static blackjack_t dealer_pull_card(blackjack_t bj)
{
    while (bj.score_dealer < 17) {
        bj.dealer_card[bj.nb_dealer] = pull_card();
        bj.nb_dealer++;
        bj.score_dealer = calcul_score(bj.dealer_card, bj.nb_dealer);
    }
    return bj;
}

void show_dealer_card(blackjack_t bj)
{
    printf("Main du croupier: ");
    for (int i = 0; i < bj.nb_dealer; i++) {
        printf("%d ", bj.dealer_card[i]);
    }
    printf("\n");
}

blackjack_t handle_dealer(blackjack_t bj)
{
    bj.score_player = calcul_score(bj.player_card, bj.nb_player);
    bj = dealer_pull_card(bj);
    show_dealer_card(bj);
    bj.score_dealer = calcul_score(bj.dealer_card, bj.nb_dealer);
    printf("Score du croupier: %d\n", bj.score_dealer);
    return bj;
}
