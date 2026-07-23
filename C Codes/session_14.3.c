#include <stdio.h>

// Function to format followers count
void formatFollowersCount(int count) {
    if (count < 1000) {
    printf("%d", count);
    }
    else if (count < 1000000) {
    printf("%.1fK", count / 1000.0);
    }
    else {
    printf("%.1fM", count / 1000000.0);
    }
}

int main() {
    int a = 1500, b = 1200000, c = 800;

    printf("Formatted counts:\n");

    formatFollowersCount(a);
    printf("\n");

    formatFollowersCount(b);
    printf("\n");

    formatFollowersCount(c);
    printf("\n");

    return 0;

}