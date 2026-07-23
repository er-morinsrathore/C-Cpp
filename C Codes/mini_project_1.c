#include <stdio.h>

int main() {
int minutes[7] = {0};
int count = 0;
int choice;

FILE *fp;

while (1) {
    printf("\n--- Music Listening Logger ---\n");
    printf("1. Log daily minutes\n");
    printf("2. View weekly summary\n");
    printf("3. Exit\n");
    printf("4. Reset data\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // 1. Log minutes
    if (choice == 1) {
        if (count < 7) {
            printf("Enter minutes for day %d: ", count + 1);
            scanf("%d", &minutes[count]);

            // save to file
            fp = fopen("music_log.txt", "a");
            fprintf(fp, "%d\n", minutes[count]);
            fclose(fp);

            count++;
        } else {
            printf("All 7 days already logged!\n");
        }
    }

    // 2. View summary
    else if (choice == 2) {
        int total = 0, max = 0, value;
        float avg;

        fp = fopen("music_log.txt", "r");

        if (fp == NULL) {
            printf("No data found!\n");
            continue;
        }

        printf("\n--- Weekly Report ---\n");

        int i = 0;
        while (fscanf(fp, "%d", &value) != EOF && i < 7) {
            total += value;

            if (value > max) {
                max = value;
            }
            i++;
        }

        fclose(fp);

        if (i == 0) {
            printf("No data to display!\n");
        } else {
            avg = (float)total / i;

            printf("Total minutes: %d\n", total);
            printf("Average minutes: %.2f\n", avg);
            printf("Highest minutes: %d\n", max);
        }
    }

    // 3. Exit
    else if (choice == 3) {
        printf("Exiting...\n");
        break;
    }

    // 4. Reset data
    else if (choice == 4) {
        int confirm;

        printf("Are you sure you want to reset? (1 = Yes, 0 = No): ");
        scanf("%d", &confirm);

        if (confirm == 1) {
            // clear array
            for (int i = 0; i < 7; i++) {
                minutes[i] = 0;
            }
            count = 0;

            // clear file
            fp = fopen("music_log.txt", "w");
            fclose(fp);

            printf("Data reset successfully!\n");
        } else {
            printf("Reset cancelled.\n");
        }
    }

    else {
        printf("Invalid choice!\n");
    }
}

return 0;

}