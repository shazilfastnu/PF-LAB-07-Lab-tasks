#include <stdio.h>

int main() {
    int n;
    printf("Enter no of sales recorded today :- ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("You must enter a positive number of sales.\n");
        return 0;
        main ();
    }
    int products[n];              
    printf("Enter the product IDs of the products sold :-\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &products[i]);
    }
    int mostSoldProduct = products[0]; 
    int mostSoldCount = 0;            
    for (int i = 0; i < n; i++) {
        int currentCount = 0;               
        for (int j = 0; j < n; j++) {
            if (products[i] == products[j]) {
                currentCount++;             
            }
        }
        if (currentCount > mostSoldCount) {
            mostSoldCount = currentCount;
            mostSoldProduct = products[i];
        }
    }
    printf("\nThe product which was sold the most had the product ID:- %d\n", mostSoldProduct);
    return 0;
}
