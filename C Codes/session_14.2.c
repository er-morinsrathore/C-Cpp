#include <stdio.h>

// Function to check if a number is even
int isEven(int num) {
    if (num % 2 == 0) {
    return 1; // true (even)
    } else {
    return 0; // false (odd)
    }
}

int main() {
    int number = 4;

    if (isEven(number)) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }

    return 0;

}