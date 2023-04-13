/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** print_blackjack
*/

#include <stdio.h>
#include "../include/blackjack.h"

void print_blackjack(blackjack_t bj)
{
    printf("Blackjack !\n");
    printf("Vous avez gagnez %.2f euros !\n", bj.mise * 2.5);
}
