#include<stdio.h>
int totalBill;

    int calculateTotal(itemPrice, Quantity){
        totalBill = itemPrice * Quantity;
        return totalBill;
    }

    int main(){
    int itemPrice = 500;
    int Quantity = 25;
    //int totalBill;
    printf("totalBill is %d", totalBill);
    calculateTotal(itemPrice, Quantity);
}
