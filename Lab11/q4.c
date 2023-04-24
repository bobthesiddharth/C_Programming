//user input matrix and summation of matrix elements

#include<stdio.h>

int main()
{
    int m=0,n=0,c=0,d=0,sum=0;
    printf("Enter No of Row :");
    scanf("%d",&m);
    printf("Enter No of Columns :");
    scanf("%d",&n);
    int a[m][n];
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter 1st matrix element:",&j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter 2nd matrix element:",&j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j]+b[i][j];
        }
    }
    printf("sum of two matrices = %d",sum);
}
