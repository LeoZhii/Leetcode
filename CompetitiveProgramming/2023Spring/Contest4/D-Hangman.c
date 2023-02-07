#include <stdio.h>
#include <stdbool.h>

int main(void) {
    // recieve input for word and guess
    char word[50] = "";
    char guess[50] = "";
    scanf("%s", word);
    scanf("%s", guess);
    printf("%s\n%s", word, guess);

    // create array out of word and guess
    

    // iterate through guess using a while loop
    int i = 10;
    while(i != 0) {
        // iterate through each letter in the word
        bool modified = false;
        int n = -1;
        while(true) {
            n++;
            if(word[n] == guess[i]) {
                word[n] = "";
                modified = true;
            }
            else if(word[n] == 0) {
                break;
            }
        }
    }


    return 0;
}


// gcc -o D-Hangman D-Hangman.c
// ./D-Hangman

// HANGMAN
// ABCDEFGHIJKLMNOPQRSTUVWXYZ
