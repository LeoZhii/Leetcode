#include <stdio.h>
#include <string.h>

int main(void) {
    // recieve inputs
    // int n;
    // scanf("%d", &n);
    char temperature[50];
    scanf("%s", temperature);

    // get first token
    char * token = strtok(temperature, " ");
    
    int i = 0;
    // iterate through remaining tokens
    while( token[i] != 0 ) {
        printf( "%c\n", token[i] );
    }

    
    return 0;
}


// gcc -o A-ColdputerScience A-ColdputerScience.c
// ./A-ColdputerScience