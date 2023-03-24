//factorial

#include<stdio.h>

int main(){
 int n,f;
 for(int i=1;i<=10;i++){
  n=i;f=1;
  for(int j=1;j<=n;j++){
   f*=j;
  }
  printf("%d \n",f);
 }
 return 0;
}
