//Diagonal elements and find the sum

#include<stdio.h>

int main()
{
    int m=0,n=0,sum=0;
    printf("Enter No of Row:");
    scanf("%d",&m);
    printf("Enter No of Column:");
    scanf("%d",&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter Matrix elements:");
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of diaginal elements of Matrix: %d",sum);
}
