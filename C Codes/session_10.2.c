#include <stdio.h>
#include <string.h>

int main() {
    char user1[50], user2[50];

    printf("Enter first username: ");
    scanf("%s", user1);

    printf("Enter second username: ");
    scanf("%s", user2);

    if (strcmp(user1, user2) == 0) {
        printf("Usernames are the same\n");
    } else {
        printf("Usernames are different\n");
    }

    return 0;

}