#include<stdio.h>
int main(){
    int s1,s2;
    int i;
    int k=0;
    
    printf("Enter the number of students in Section A:- ");
    scanf("%d",&s1);
    
    int SecA[s1];
    
    printf("Enter the roll no's of Students in Section A.\n");
    for(i=0;i<s1;i++)
    {
        printf("Roll number %d:- ",i+1);
        scanf("\n%d",&SecA[i]);
    }
    
    printf("Enter the number of students in Section B:- ");
    scanf("%d",&s2);
    
    int SecB[s2];
    
    printf("Enter the roll no's of Students in Section B.\n");
    for(i=0;i<s2;i++)
    {
        printf("Roll number %d:- ",i+1);
        scanf("\n%d",&SecB[i]);
    }
    
    int Combined[s1+s2];
    for(i=0;i<s1;i++)
    {
        Combined[k] = SecA[i];
        k++;
    }
    
    for(i=0;i<s2;i++)
    {
        Combined[k] = SecB[i];
        k++;
    }

    printf("\nCombined List of Both Section A and Section B:-");
    for(i=0;i<k;i++)
    {
        printf("\n%d",Combined[i]);
    }
    printf("\n");
    
    return 0;
}