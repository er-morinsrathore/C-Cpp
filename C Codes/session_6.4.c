#include<stdio.h>

void main(){
    int i;
    while(i=0, i<=3){
        printf("i");
        i++;
    }
    
    i=3;
    do{
        printf("i");
        i++;
    }while(i<=3);
}