#include <stdio.h>
#include <ctype.h>

// Reusable function
void capitalize(char str[]) {
    if (str[0] != '\0') {
    str[0] = toupper(str[0]);
    }
}

int main() {
    char product[] = "laptop";
    char user[] = "morin";

    capitalize(product);
    capitalize(user);

    printf("Product Name: %s\n", product);
    printf("Username: %s\n", user);

    return 0;

}