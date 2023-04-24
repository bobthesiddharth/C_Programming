//WAP  to declare/initialize the matrix of size m*n where m and n are user inputs and display ele present in matrix.

#include<stdio.h>

int main()
{
    int m=0,n=0;
    printf("Enter No of Row:");
    scanf("%d",&m);
    printf("Enter No of Column:");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter Matrix elemets:");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }   
}