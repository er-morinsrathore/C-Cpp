#include<stdio.h>
void main(){
    float rating;
    int playlistRatings[3][5];

    for(int i = 0; i<playlistRatings[3]; i++){
        for(int j=0; j<playlistRatings[5]; j++){
            if(j==0 && i==1){
                printf("%f", rating = 5.0);
            }
            else if(j==1 && i==1){
                printf("%f", rating = 4.5);
            }
            else if(j==2 && i==1){
                printf("%f", rating = 4.2);
            }
            else{
                printf("%d %d", i,j);
            }
        }
    }
}