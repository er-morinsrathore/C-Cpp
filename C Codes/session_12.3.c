#include <stdio.h>

struct Time {
       int hours;
       int minutes;
};

struct MovieShow {
       char movie[50];
       int screen;
       struct Time showTime;
};

int main() {
       struct MovieShow show = {"Inception", 2, {7, 30}};

       printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",show.movie, show.screen,
              show.showTime.hours, show.showTime.minutes);

       return 0;

}