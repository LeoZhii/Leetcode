#include <stdio.h>
#include <string.h>

int main(void) {
    // recieve inputs
    int n;
    char temperature[50];
    scanf("%d", &n);
    scanf("%s", temperature);

    // get first token
    char * token = strtok(temperature, " ");
   
    // iterate through remaining tokens
    while( token != NULL ) {
        printf( "%s\n", token );
        
        token = strtok(NULL, " ");
    }

    return 0;
}


// gcc -o A-ColdputerScience A-ColdputerScience.c
// ./A-ColdputerScience