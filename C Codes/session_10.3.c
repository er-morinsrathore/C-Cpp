#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Flipkart";
    char shoppingApp[20];

    strcpy(shoppingApp, source);

    printf("Copied string: %s\n", shoppingApp);

    return 0;

}