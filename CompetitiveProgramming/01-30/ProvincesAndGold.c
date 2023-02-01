#include <stdio.h>

int main(void) {
    // accept input
    char gold[6], silver[6], copper[6];
    scanf("%s %s %s", gold, silver, copper);
    printf("%s %s %s\n", gold, silver, copper);
    
    //

    return 0;
}

// gcc -o ProvincesAndGold ProvincesAndGold.c
// ./ProvincesAndGold