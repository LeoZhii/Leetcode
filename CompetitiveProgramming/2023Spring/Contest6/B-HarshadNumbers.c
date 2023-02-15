#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", num);
    int ognum = num;
    int total = 0;
    int first = 1;

    while(ognum%total != 0) {
        if(first == 1) {
        first = 0;
        }

        if(first==0) {
        ognum++;
        }

        total = 0;
        num = ognum;

        while(num>1) {
            total += num%10;
            num = (num-(num%10))/10;
            if(num == 0) {
                break;
            }
        }
    }

    printf("%i", ognum);
    return 0;
}