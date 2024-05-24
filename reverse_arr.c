#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,4,5};
    int arr2[5];
    printf("arrays numbers before reverse:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("arrays numbers after reverse:\n");
    for(int i =4;i>=0;i--)
     {
        arr2[4-i] = arr[i];
        printf("%d ",arr2[4-i]);
     }   
}