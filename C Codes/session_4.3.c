#include<stdio.h>
#include<stdbool.h>
    
    int isEligibleForOffer(){
        int age;
        double totalOrderValue;
        
        printf("Enter age: ");
        scanf("%d", &age);

        printf("Enter total order value: ");
        scanf("%lf", &totalOrderValue);

        if(age >= 18 && totalOrderValue > 500){
            return true;
        }

        else{
            return false;
        }
    }
    int main(){
        int result = isEligibleForOffer();
        printf("Offer present: %d", result);
        
        bool result = isEligibleForOffer();
        printf("Offer present: %d", result); //%d is written because the bool values are stored as 1 and 0 in C.
    }