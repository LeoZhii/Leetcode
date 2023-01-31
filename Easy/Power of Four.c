#include <stdio.h>

int powerOfFour(num) {
    int counter = num;

    if(counter < 3) {
        return num * powerofFour(num);
    }
    else {
        return num * num;
    }
}


int main() {
    printf("%i",powerOfFour(3));

    return 0;
}