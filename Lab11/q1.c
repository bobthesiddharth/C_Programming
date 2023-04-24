//WAP  to declare [5*4] Matrix and initialize the matrix at complaitation time (starting declaration)

#include<stdio.h>

int main()
{
    int m=5,n=4;
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