//user input matrix and summation of matrix elements

#include<stdio.h>

int main()
{
    int m=0,n=0,sum=0;
    printf("Enter No of Row:");
    scanf("%d",&m);
    printf("Enter No of Columns:");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter matrix elemets:");
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of Matrix: %d",sum);
}
