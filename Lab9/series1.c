//series1
#include<stdio.h>

int main(){
 int n,x,sum=1,p=1;
 printf("Enter the value of n:");
 scanf("%d",&n);
 printf("Enter the value of x:");
 scanf("%d",&x);
 for(int i=1;i<=n;i++){
  p=p*x;
  sum+=p;
 }
 printf("SUM= %d",sum);
}
