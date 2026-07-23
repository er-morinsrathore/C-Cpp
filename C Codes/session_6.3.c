#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char songs[3][50] = {"ShapeOfYou", "Believer", "BlindingLights"};
    char guess[50];

    srand(time(0));
    int randomIndex = rand() % 3;

    printf("Guess the Song Game!\n");

    do {
        printf("Enter your guess: ");
        scanf("%s", guess);

        if (strcmp(guess, songs[randomIndex]) != 0) {
            printf("Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[randomIndex]) != 0);

    printf("Correct! The song was %s\n", songs[randomIndex]);

    return 0;

}