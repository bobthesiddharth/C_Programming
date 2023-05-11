//WAP in C to print the array elements using recurssion
#include <stdio.h>
int arrayprint(int arr[],int);
int n=0;
int main()
{
    int n=0;
    printf("Enter array length: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter array elements:");
        scanf("%d", &arr[i]);
    }

    arrayprint(arr,n);
    return 0;
}

int arrayprint(int arr[],int n){
    if (n==0){
        return 0;
    }
    arrayprint(int arr[],int n);
    printf("Array elements:%d",arr[n-1]);
}