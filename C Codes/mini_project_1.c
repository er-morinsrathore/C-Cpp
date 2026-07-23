#include <stdio.h>

#define DAYS 7
#define FILE_NAME "study_data.txt"

void loadData(float hours[]) {
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) return;

    for (int i = 0; i < DAYS; i++) {
        fscanf(fp, "%f", &hours[i]);
    }

    fclose(fp);
}

void saveData(float hours[]) {
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp == NULL) return;

    for (int i = 0; i < DAYS; i++) {
        fprintf(fp, "%f\n", hours[i]);
    }

    fclose(fp);
}

void logHours(float hours[]) {
    for (int i = 0; i < DAYS; i++) {
        printf("Enter study hours for Day %d: ", i + 1);
        scanf("%f", &hours[i]);
    }
    saveData(hours);
    printf("Data saved successfully.\n");
}

void weeklyReport(float hours[]) {
    float total = 0;

    printf("\nWeekly Study Report:\n");
    for (int i = 0; i < DAYS; i++) {
        printf("Day %d: %.2f hours\n", i + 1, hours[i]);
        total += hours[i];
    }

    printf("Total Hours: %.2f\n", total);
    printf("Average Hours: %.2f\n", total / DAYS);
}

int main() {
    float hours[DAYS] = {0};
    int choice;

    loadData(hours);

    do {
        printf("\n--- Student Productivity Tracker ---\n");
        printf("1. Log Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                logHours(hours);
                break;
            case 2:
                weeklyReport(hours);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    } while (choice != 3);

    return 0;
}