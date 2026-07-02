#include<stdio.h>

int main(){
    int likes;
    int shares;
    int comments;

    printf("likes");
    scanf("%d", &likes);

    printf("shares");
    scanf("%d", &shares);

    printf("comments");
    scanf("%d", &comments);

    if(likes <= 1000 || comments < 200 && shares <= 50){
        printf("Trending Post");
    }
    else{
        printf("Not trending");
    }
}