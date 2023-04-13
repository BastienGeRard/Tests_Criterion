/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** my_blackjack
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/blackjack.h"

void my_blackjack(int mise)
{
    blackjack_t bj = init_struct_blackjack(mise);

    welcome_message(bj.mise);
    srand(time(NULL));
    bj = pull_start_hand(bj);
    show_card_start(bj.player_card, bj.dealer_card);
    if (is_blackjack(bj) == 1) {
        print_blackjack(bj);
        return;
    }
    bj = game_loop(bj);
    if (bj.game_over == false)
        bj = handle_dealer(bj);
    win_loose_conditions(bj);
}
