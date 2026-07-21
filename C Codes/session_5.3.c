#include<stdio.h>
void main(){
    int cart_amt;

    printf("Enter cart_amt");
    scanf("%d", &cart_amt);

    if(cart_amt>1000){
        if(cart_amt>2000){
            cart_amt = cart_amt - (cart_amt*0.2);
            printf("%d", &cart_amt);
        }
        else{
            cart_amt = cart_amt - (cart_amt*0.1);
            printf("%d", &cart_amt);
        }
    }
    else{
        printf("No Discount!");
    }
}
