#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[10];
    int i, searchValue;
    srand(time(0));
    printf("Random list of 10 integers:\n");
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;  
        printf("%d ", numbers[i]);
    }

    printf("\n\nEnter a number to search: ");
    scanf("%d", &searchValue);

    for (i = 0; i < 10; i++) {
        if (numbers[i] == searchValue) {
            printf("Number %d found at index %d\n", searchValue, i);
            return 0;  
        }
    }

    printf("Number %d not found in the list.\n", searchValue);

    return 0;
}
