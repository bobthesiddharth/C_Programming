#include<stdio.h>

int main(){
    int h;
    printf("Enter no of memory allocation");
    scanf("%d",&h);
    int avail=0,c=0,n,a[h];
    for(int i=0; i<h; i++){
        a[i]=0;
    }
    printf("Enter 1 to 'fill' random allocate memory OR else enter 0 to keep the memory 'empty' till loop ends: \n");
    for(int i=0; i<h; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<h; i++){
        if(a[i]==0){
            avail++;
        }
    }
    for(int i=0; i<h; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Enter the Number of places you want to allocated: \n");
    scanf("%d",&n);
    int b[n];
    if(avail>n){
        printf("Your location is available \n");
    } else{
        printf("Sorry no memory is available \n");
    }

    int cc=0;
    for(int i=1;i<=h;i++){
        if(cc==n){
          break;
      }
        if(a[i]==0 && cc<=n){
            a[i]=1;
            cc++;
         }
    }
    for(int i=0;i<h;i++){
        printf("%d ",a[i]);
    }
}