#include<stdio.h>

int main(){
    char fav_team[] = "";
    
    printf("Enter you fav IPL team: ");
    scanf("%s", &fav_team);

    if(fav_team == "csk"){
        printf("GO CSK!");
    }
    else if(fav_team == "rcb"){
        printf("GO RCB!");
    }
    else if(fav_team == "mi"){
        printf("GO MI!");
    }
    else if(fav_team == "srh"){
        printf("GO SRH!");
    }
    else if(fav_team == "gt"){
        printf("GO GT!");
    }
    else{
        printf("TEAM NOT FOUND!");
    }
}