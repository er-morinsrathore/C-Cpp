#include<stdio.h>
void main(){
    int dailysteps[7];

    for(int i = 0; i<dailysteps; i++){
        printf("Enter total steps walked today: ");
        scanf("%d", &dailysteps);
    }

    for(int i = 0; i<dailysteps; i++){
        printf("Total steps walked each day of the week are");
    }
}