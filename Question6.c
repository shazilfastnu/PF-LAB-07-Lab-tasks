#include <stdio.h>   
int main() {         
    int items[100];  
    int n;
    int defective;   
    int i, k = 0;    
    
    printf("Enter number of items: ");
    scanf("%d", &n);  
    printf("Enter the item codes:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &items[i]);  
    }
    printf("Enter the defective item code to remove: ");
    scanf("%d", &defective);  
    for (i = 0; i < n; i++) {

        if (items[i] != defective) {
            items[k] = items[i];  
            k++;                  
        }
    }
    printf("\nUpdated item list (after removing %d):\n", defective);
    for (i = 0; i < k; i++) {
        printf("%d ", items[i]);  
    }
    printf("\n");  
    return 0;   
}   