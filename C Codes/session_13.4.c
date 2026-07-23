#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
    }
}

int main() {
    FILE *fp;
    char song[100], temp[100];

    fp = fopen("playlist.txt", "r");

    while (fgets(song, sizeof(song), fp) != NULL) {
        strcpy(temp, song);
        toLowerCase(temp);

        if (strstr(temp, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;

}