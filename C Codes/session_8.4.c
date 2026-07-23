#include <stdio.h>

void formatPrice(int price) {
    if (price >= 1000) {
    printf("₹%d,%03d", price / 1000, price % 1000);
    } else {
    printf("₹%d", price);
    }
}

int main() {
    int p1 = 1599, p2 = 499, p3 = 12000;

    printf("Product 1 Price: ");
    formatPrice(p1);
    printf("\n");

    printf("Product 2 Price: ");
    formatPrice(p2);
    printf("\n");

    printf("Product 3 Price: ");
    formatPrice(p3);
    printf("\n");

    return 0;

}