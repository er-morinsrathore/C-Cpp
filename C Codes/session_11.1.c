#include <stdio.h>

int main() {
    int likes = 100;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes: %d\n", likes);
    printf("Value using pointer: %d\n", *ptrLikes);

    printf("Address stored in ptrLikes: %p\n", ptrLikes);
    printf("Address of likes: %p\n", &likes);

    return 0;

}