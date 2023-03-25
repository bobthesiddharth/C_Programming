//Series2 1 + x/2! + x^2/3! +…+x^n/(n+1)!
#include<stdio.h>

int main(){
    float n,x,sum=1,p=1,j,d,f=1;
    printf("Enter a n: ");
    scanf("%f",&n);
    printf("Enter a x:");
    scanf("%f",&x);
    for(int i=1;i<=n;i++){
        p=p*x;
        for(int j=1;j<=i;j++){
            f=f*j;
        }
        d=p/f;
        sum+=d;
        f=1;
    }
    printf("SUM of series : %f",sum);
}