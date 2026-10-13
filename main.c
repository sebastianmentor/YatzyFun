#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // seed with current time

    int nr_of_players = 0;
    printf("Welcome to master YATZY! Lets play!\n");
    printf("Enter number of players (2-6): ");
    if (scanf("%d", &nr_of_players) != 1)
    {
        printf("OMG, how hard can it be to enter correct value!?\n");
        return 1;
    }

    if (nr_of_players < 2 || nr_of_players > 6)
    {
        printf("We said 2 to 6 total players? What are you doing??\n");
        return 1;
    }

    printf("Perfect, we have %d number of players! Lets enter the names of all the players!\n", nr_of_players);
    
    return 0;
}