#include <stdio.h>

int main() {
    int orders[5] = {250, 400, 150, 300, 500};
    int *ptr = orders;

    for (int i = 0; i < 5; i++) {
        printf("Amount: %d, Address: %p\n", *(ptr + i), (ptr + i));
    }

    return 0;

}