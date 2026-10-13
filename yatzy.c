#include <stdio.h>
#include <stdlib.h>
#include "yatzy.h"

void play_yatzy(char **players, int **score_board, int total_number_of_players)
{
    printf("STARTING GAME!\n");
    printf("&players has local adress %p\n", (void *)&players);
    printf("players has local value %p\n", (void *)players);
    printf("*players pointer value %p\n", (void *)(*players));
    printf("**players gives %c\n", (char)**players);

    for(int i = 0; i < total_number_of_players;i++)
    {
        printf("Player %d. %s\n", i+1, *(players + i));
    }
}