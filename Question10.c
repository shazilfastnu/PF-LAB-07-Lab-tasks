#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numbers[10];
    int i, searchValue;

    // Step 1: Seed random number generator
    srand(time(0));

    // Step 2: Generate 10 random numbers
    printf("Random list of 10 integers:\n");
    for (i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;  // random number between 0–99
        printf("%d ", numbers[i]);
    }

    // Step 3: Take search value from user
    printf("\n\nEnter a number to search: ");
    scanf("%d", &searchValue);

    // Step 4: Search through the array
    for (i = 0; i < 10; i++) {
        if (numbers[i] == searchValue) {
            printf("Number %d found at index %d\n", searchValue, i);
            return 0;  // stop program as soon as found
        }
    }

    // Step 5: If number not found
    printf("Number %d not found in the list.\n", searchValue);

    return 0;
}
