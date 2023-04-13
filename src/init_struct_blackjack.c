/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** init_struct_blackjack
*/

#include <stddef.h>
#include <stdbool.h>
#include "../include/blackjack.h"

blackjack_t init_struct_blackjack(float mise)
{
    blackjack_t blackjack;

    blackjack.nb_player = 2;
    blackjack.nb_dealer = 2;
    blackjack.choice = " ";
    for (int i = 0; i < 21; i++) {
        blackjack.player_card[i] = 0;
        blackjack.dealer_card[i] = 0;
    }
    blackjack.mise = mise;
    blackjack.score_player = 0;
    blackjack.score_dealer = 0;
    blackjack.game_over = false;
    return blackjack;
}
