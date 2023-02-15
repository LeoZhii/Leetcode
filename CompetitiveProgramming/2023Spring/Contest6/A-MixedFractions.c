#include <stdio.h>
#include <string.h>
// passed

int main(void) {
    int numerator, denominator;
    while(1==1){
        scanf("%i %i", &numerator, &denominator);
        if(numerator == 0 && denominator == 0){
            break;
        }
        int quotient = numerator/denominator;
        int remainder = numerator % denominator;

        printf("%i %i / %i\n", quotient, remainder, denominator);
    }

    return 0;
}