#include <stdio.h>
float calculateAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;

}

int main() {
    int amounts[7];
    float avg;

    printf("Enter Zomato spending for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &amounts[i]);
    }

    avg = calculateAverage(amounts, 7);

    printf("Average weekly spend: %.2f\n", avg);

    return 0;

}