#include <stdio.h>

int main() {
    int matches, teams;

    printf("Enter number of matches: ");
    scanf("%d", &matches);

    printf("Enter number of teams per match: ");
    scanf("%d", &teams);

    int cricketScores[matches][teams];

    printf("Enter scores:\n");
    for (int i = 0; i < matches; i++) {
        for (int j = 0; j < teams; j++) {
            scanf("%d", &cricketScores[i][j]);
        }
    }

    for (int i = 0; i < matches; i++) {
        int max = cricketScores[i][0];

        for (int j = 1; j < teams; j++) {
            if (cricketScores[i][j] > max) {
                max = cricketScores[i][j];
            }
        }
        printf("Highest score in match %d: %d\n", i + 1, max);
    }

    return 0;

}