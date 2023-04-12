/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** pull_card
*/

#include <stdlib.h>
#include "../include/blackjack.h"

int pull_card(void)
{
    return rand() % 10 + 1;
}

blackjack_t pull_start_hand(blackjack_t bj)
{
    bj.player_card[0] = pull_card();
    bj.player_card[1] = pull_card();
    bj.dealer_card[0] = pull_card();
    bj.dealer_card[1] = pull_card();
    return bj;
}
