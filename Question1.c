#include <stdio.h>

int main() {
    int studentrollno[10] = {1,2,3,4,5,5,7,8,8,10};
    int i, j;
    int duplicate_found = 0;

    for(i = 0; i < 10; i++) 
	{
     for(j = i + 1; j < 10; j++) {
        if(studentrollno[i] == studentrollno[j]) {
                printf("Duplicate detected: %d\n", studentrollno[i]);
                duplicate_found = 1;
        }
    }
    }

    if(!duplicate_found) {
        printf("Every data is uniwque.");
    }

    return 0;
}
