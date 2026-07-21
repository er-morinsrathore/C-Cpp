#include<stdio.h>
#include<string.h>

void getUserInitials(){    
    
    char name[20];
    int i;

    printf("Enter name: ");
    scanf("%s", name);

    for(i=0; i<strlen(name); i++){
        name[i] = name[i] - 32;
    }
    printf("%s", name);
}

void main(){
    getUserInitials();
}