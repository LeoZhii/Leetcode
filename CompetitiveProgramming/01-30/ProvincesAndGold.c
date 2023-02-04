#include <stdio.h>

int main(void) {
    // accept input
    int gold, silver, copper;
    scanf("%d %d %d", &gold, &silver, &copper);
    printf("%d %d %d", gold, silver, copper);

    // write conditionals for each case
    int total = (gold + silver + copper);
    printf("%d", total);

    return 0;
}

// gcc -o ProvincesAndGold ProvincesAndGold.c
// ./ProvincesAndGold