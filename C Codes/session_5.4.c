#include<stdio.h>

int main(){
    int age;
    
    printf("Enter your preferred meal time: ");
    scanf("%d", &age);

    if(age>=18){
        printf("Eligible for driving liscense. \n ");
        if(age>=21){
            printf("Eligible for credt card. \n ");
            if(age>=25){
                printf("Eligible for car rental. \n ");
            }
        }
    }
}