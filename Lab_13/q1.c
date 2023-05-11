//WAP in C to calculate the sum of numbers from 1 to n using recurssion
#include<stdio.h>
int sum(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=sum(n);
    printf("Sum of %d numbers = %d\n",n,a);
    printf("\n");
}

int sum(int x){
    int sum1;
    if(x==0){
        return 0;
    }
    sum1=x+sum(x-1);
    return sum1;
}