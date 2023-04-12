/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** show_cards
*/

#include <stdio.h>

void show_card_start(int *player_card, int *dealer_card)
{
    printf("Cartes du joueur : %d %d\n", player_card[0], player_card[1]);
    printf("Cartes du croupier : %d ??\n", dealer_card[0]);
}
