#include <stdio.h>

int main() {
    int marks[10];
    int i, highest;
    printf("Enter marks for 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    highest = marks[0];


    for (i = 1; i < 10; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    
    printf("The highest marks scored is: %d\n", highest);

    return 0;
}