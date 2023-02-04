#include <stdio.h>
#include <string.h>

int main(void) {
    // accept input
    int gold, silver, copper;
    scanf("%d %d %d", &gold, &silver, &copper);
    // printf("%d %d %d\n", gold, silver, copper);

    // calculate total buying power
    int bpTotal = (gold*3 + silver*2 + copper*1);

    // write conditionals for each treasure
    char treasure[20] = "";
    if(bpTotal >= 6) {
        strcat(treasure,"Gold");
    }
    else if(bpTotal >= 3) {
        strcat(treasure, "Silver");
    }
    else if(bpTotal >= 0) {
        strcat(treasure, "Copper");
    }

    // print total for each estate and buying power
    if(bpTotal >= 8) {
        printf("Province or %s\n", treasure);
    }
    else if(bpTotal >= 5) {
        printf("Duchy or %s\n", treasure);
    }
    else if(bpTotal >= 2) {
        printf("Estate or %s\n", treasure);
    }
    else if(bpTotal >= 0) {
        printf("Copper\n");
    }

    return 0;
}

// gcc -o ProvincesAndGold ProvincesAndGold.c
// ./ProvincesAndGold