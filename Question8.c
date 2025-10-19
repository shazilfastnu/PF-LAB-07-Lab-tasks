#include<stdio.h>
int main (){
    int n;
    int i;
    int k;
    printf("Enter Number Of Employees:- ");
    scanf("%d",&n);
    int employeeIDs[n];
    printf("\nEnter Employee ID's\n");
    for (i=0;i<n;i++)
    {
        printf("Employee Number %d: ",i+1);
        scanf("%d",&employeeIDs[i]);
    }

    printf("\nEnter the value of k by which you want to rotate employees ID to right.\n");
    scanf("%d",&k);
    int aftershifting[n];
    for (i=0;i<k;i++)
    {
        aftershifting[i] = employeeIDs[n-k+i];
    }
    for (i=k;i<n;i++)
    {
        aftershifting[i] = employeeIDs[i-k];
    }
    
    printf("Final array after right rotation by %d: ",k);
    for (i=0;i < n;i++)
    {
        printf("%d ", aftershifting[i]);
    }
    return 0;
}

