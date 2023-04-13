/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** blackjack
*/

#pragma once

#include <stdbool.h>

typedef struct blackjack_s {
    int nb_player;
    int nb_dealer;
    int player_card[21];
    int dealer_card[21];
    char *choice;
    float mise;
    int score_player;
    int score_dealer;
    bool game_over;
} blackjack_t;

blackjack_t init_struct_blackjack(float mise);
void my_blackjack(int mise);
void welcome_message(float mise);
int pull_card(void);
void show_card_start(int *player_card, int *dealer_card);
blackjack_t pull_start_hand(blackjack_t bj);
char *scan_choice_player(void);
blackjack_t game_loop(blackjack_t bj);
int calcul_score(int *cartes, int nb_cards);
blackjack_t handle_dealer(blackjack_t bj);
blackjack_t user_pull_card(blackjack_t bj);
bool check_over_bj(int score);
void win_loose_conditions(blackjack_t bj);
void show_dealer_card(blackjack_t bj);
int is_blackjack(blackjack_t bj);
void print_blackjack(blackjack_t bj);
