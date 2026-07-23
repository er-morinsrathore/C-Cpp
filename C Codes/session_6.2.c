#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char teams[10][50] = {"CSK", "MI", "RCB"};
    int count = 3;

    while (1) {
        printf("\n--- IPL Teams Menu ---\n");
        printf("1. View Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nYour Favorite Teams:\n");
            for (int i = 0; i < count; i++) {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        } 
        else if (choice == 2) {
            if (count < 10) {
                printf("Enter new team name: ");
                scanf("%s", teams[count]);
                count++;
                printf("Team added successfully!\n");
            } else {
                printf("Team list is full!\n");
            }
        } 
        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;

}