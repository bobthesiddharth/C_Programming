//armgstrong

#include<stdio.h>

int main(){
 int n,p,sum=0;
 printf("Enter a Number: ");
 scanf("%d",&n);
 int m=n;
 while(n!=0){
  p=n%10;
  sum+=p*p*p;
  n=n/10;
 }
 if(sum==m){
  printf("Armgstrong Number");
 }
 else{
  printf("Not Armgstrong Number");
 }
}
