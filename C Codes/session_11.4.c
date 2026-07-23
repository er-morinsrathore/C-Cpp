#include <stdio.h>

void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
    *(followers + i) = *(followers + i) + 100;
    }
}

int main() {
    int followers[5] = {1000, 2000, 1500, 3000, 2500};

    incrementFollowers(followers, 5);

    printf("Updated follower counts:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", followers[i]);
    }

    return 0;

}