#include<stdio.h>

void main(){
    char productName[] = "Shirt"; //Can use single or double inverted commas during initialisation.
    float basePrice =1000.50;
    double bill = 0.0;
    const float gst = 0.18;

    bill = basePrice + (basePrice * gst);
    printf("Product name is %s", productName);
    printf("Product name is %f", basePrice);
}