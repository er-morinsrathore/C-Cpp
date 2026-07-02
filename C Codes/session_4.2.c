#include<stdio.h>
#include<stdbool.h>
    
    int main(){
        int productPrice = 500;
        int discountPercentage = 25;
        bool isMember = true;
        float price;

        if(isMember){
            float discountPrice = productPrice - (productPrice * discountPercentage);
            price = discountPrice * 0.05;
            printf("Final Price is: %f", price);
        }
        else{
            price = productPrice - (productPrice * discountPercentage);
            printf("Final Price is: %f", price);
        }
}
