#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "Tum Hi Ho\n");
    fprintf(fp, "Shape of You\n");
    fprintf(fp, "Blinding Lights\n");

    fclose(fp);

    printf("Songs written to file successfully.\n");

    return 0;

}