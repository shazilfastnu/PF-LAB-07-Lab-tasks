#include<stdio.h>
int main (){
    int nitems;
    int i;
    int j;
    int sum;
    float item1;
    float item2;
    float customer_budget;
    int found = 0;
    printf("Enter Number of items available in store:- ");
    scanf("%d",&nitems);
    float pricesarr [nitems];
    printf("Enter prices of %d items:- \n",nitems);
    for (i=0;i < nitems;i++)
    {
        scanf("\n%f",&pricesarr[i]);
    }
    printf("Enter the Customer's Budget :- ");
    scanf("%f",&customer_budget);
    printf("\nHere is the list of combinations of items that make up to customer's budget.\n");
    for (i=0;i < nitems;i++)
    {
        for(j=i+1;j < nitems;j++)
        {
            sum = pricesarr[i] + pricesarr[j];
            if (sum == customer_budget)
            {
                
                printf("%.2f + %.2f = %.2f\n",pricesarr[i],pricesarr[j],customer_budget);
                found = 1;
                
            }
            
        }

    }
    if (!found) {
        printf("\nNo two items combine to match the customer's budget.");
    }
    return 0;
}