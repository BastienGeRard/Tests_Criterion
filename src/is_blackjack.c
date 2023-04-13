/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** is_blackjack
*/

#include "../include/blackjack.h"

int is_blackjack(blackjack_t bj)
{
    if ((bj.player_card[0] == 1 && bj.player_card[1] == 10)
    || (bj.player_card[0] == 10 && bj.player_card[1] == 1)) {
        return 1;
    }
    return 0;
}
