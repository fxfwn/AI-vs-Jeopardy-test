//
// Created by i.nikiforov on 26.11.2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SZN_MAX 41
#define SZN_MIN 1
#define CLUE_VAL_MAX 500
#define CLUE_VAL_MIN 100

int choose_szn(int min, int max)
{
    srand(350202);
    int season = rand() % (max - min + 1) + min;
    return season;
}

int choose_clue_val(int min, int max, int seed)
{
    srand(seed);
    int clue_val = rand() % (max - min +1) + min;
    return clue_val;
}

int main()
{
    int szn_seed = choose_szn(SZN_MIN, SZN_MAX);
    printf("Season: %d\n", szn_seed);
    printf("Clue value: %d\n", choose_clue_val(CLUE_VAL_MIN, CLUE_VAL_MAX, szn_seed));
    return 0;
}