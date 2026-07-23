#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
    {"Pizza", 299.0, 4.5},
    {"Burger", 149.0, 4.2},
    {"Pasta", 199.0, 4.3}
    };

    for (int i = 0; i < 3; i++) {
        printf("\nItem: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
    }

    return 0;

}