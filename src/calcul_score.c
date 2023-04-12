/*
** EPITECH PROJECT, 2023
** Tests_Criterion [WSL : Ubuntu-20.04]
** File description:
** calcul_score
*/

int calcul_score(int *cartes, int nb_cards)
{
    int score = 0;
    int nb_as = 0;

    for (int i = 0; i < nb_cards; i++) {
        score += cartes[i];
        if (cartes[i] == 1) {
            nb_as++;
        }
    }
    while (score <= 11 && nb_as > 0) {
        score += 10;
        nb_as--;
    }
    return score;
}
