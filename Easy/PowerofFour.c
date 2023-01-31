#include <stdio.h>
#include <stdbool.h>

bool powerOfFour(num) {
    if(num == 1) {
        return true;
    }
    else if(num < 1) {
        return false;
    }
    else {
        return powerOfFour(num/4);
    }
}


int main(void) {
    printf("%d\n",powerOfFour(4));

    return 0;
}