#include <stdio.h>

int main() {
    int i, numEmployees;
    
    printf("Enter the number of employee IDs: ");
    scanf("%d", &numEmployees);

    int employeeIDs[numEmployees];
    int evenIDs[numEmployees], oddIDs[numEmployees];
    int evenCount = 0, oddCount = 0;

    printf("Enter the employee IDs:\n");
    for (i = 0; i < numEmployees; i++) {
        scanf("%d", &employeeIDs[i]);
    }

    for (i = 0; i < numEmployees; i++) {
        if (employeeIDs[i] % 2 == 0) {
            evenIDs[evenCount++] = employeeIDs[i];  
        } else {
            oddIDs[oddCount++] = employeeIDs[i];  
        }
    }
   
    printf("Even employee IDs: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenIDs[i]);
    }
    printf("\n");
   
    printf("Odd employee IDs: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddIDs[i]);
    }
    printf("\n");

    return 0;
}
