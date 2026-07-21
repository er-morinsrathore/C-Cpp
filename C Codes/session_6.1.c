#include<stdio.h>

void main(){
    int a = 10;
    int i;
    for(i=0; i<10; i++){
        printf("%d \n",a);
        a--;
    }
    printf("\n");
    for(i=10; i>0; i--){
        printf("/n",i);
    }
    printf("\n");
    for(i=10; i>=1; i--){
        printf("/n",i);
    }
    printf("\n");
    for(i=10; i>0; --i){
        printf("/n",i);
    }
}