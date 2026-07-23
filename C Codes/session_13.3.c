#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Perfect\n");
    fprintf(fp, "Love Me Like You Do\n");

    fclose(fp);

    printf("Songs added successfully.\n");

    return 0;

}