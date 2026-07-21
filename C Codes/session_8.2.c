#include<stdio.h>
#include<string.h>

void addToCart(){    
    
    char cart_arr[]={};
    int i;

    for(i=1; i<=cart_arr; i++){
        printf("Enter your %d item", i);
        scanf("%s", cart_arr[i]);
    }
    for(i=1; i<=cart_arr; i++){    
        printf("%s", cart_arr[i]);
    }
}

void main(){
    addToCart();
}