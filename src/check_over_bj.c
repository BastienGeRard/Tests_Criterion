/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** check_over_bj
*/

#include <stdbool.h>

bool check_over_bj(int score)
{
    if (score > 21) {
        return true;
    }
    return false;
}
