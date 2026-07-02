#include<stdio.h>

int main(){
    int followerCount = 0; 
    int result;
    result = followerCount++;
    
    printf("Post Increment value is: %d", result);
    printf("Post Increment value is: %d", followerCount);

    ++followerCount;
    result = followerCount;
    
    printf("Post Increment value is: %d", followerCount);
    printf("Post Increment value is: %d", result);
}