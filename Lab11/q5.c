//WAP to find the minimum element in the matrix
#include<stdio.h>

int main()
{
    int m=0,n=0,max=0;
    printf("Enter Number of Rows:");
    scanf("%d",&m);
    printf("Enter Number of Columns:");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter Matrix elements:");
            scanf("%d",&a[i][j]);
            if(a[i][j]>=max){
                max=a[i][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }   
    printf("Maximum Element of Matrix is: %d",max);
}