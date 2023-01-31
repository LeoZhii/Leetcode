#include <stdio.h>
#include <string.h>

int main(void) {
    // accept input
    char input[6];
    scanf("%s", input);
    char *token = strtok(input, " ");
    
    for(int i = 0; i < 3; i++) {
        printf("%s\n", token);
    }

    return 0;
}