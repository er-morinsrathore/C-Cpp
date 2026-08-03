#include <stdio.h>
#include <string.h>

char tasks[5][100];
int count = 0;

void markTaskDone(int index) {
strcat(tasks[index], " - DONE");
}

int main() {
int i, choice;

for(i = 0; i < 5; i++) {
    printf("Enter task %d: ", i + 1);
    fgets(tasks[i], 100, stdin);
    count++;
}

printf("\nEnter task number to mark as done: ");
scanf("%d", &choice);

markTaskDone(choice - 1);

printf("\nUpdated Task List:\n");
for(i = 0; i < count; i++) {
    printf("%d. %s", i + 1, tasks[i]);
}

return 0;

}