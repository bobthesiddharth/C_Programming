
/*
//pattern 7

    *
   **
  ***
 ****
*****


#include<stdio.h>

int main(){
    int n=0;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}


*/


//pattern 8
/*
    *
   ***
  *****
 *******
*********
#include<stdio.h>

int main(){
    int n=0;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int p=1;p<=i-1;p++){
            printf("*");
        }
        printf("\n");
    }
}
*/

//pattern 9
/*

   *   
  **   
 ***   
****   
   ****
   ***
   **
   *

*/
/*
#include<stdio.h>

int main(){
    int n=0;
    printf("Enter number of rows:");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int l=1;l<=(n-1);l++){
            printf(" ");
        }
        printf("\n");
            if(i==n){
                for(int i=1;i<=n;i++){
                    for(int j=1;j<=n-1;j++){
                        printf(" ");
                    }
                    for(int l=n;l>=i;l--){
                        printf("*");
                    }
                    printf("\n");
                }
            }
    }
}

*/

//pattern 10

/*


**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/

#include<stdio.h>

int main(){
    int n=0;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=n;k>=i;k--){
            printf("*");
        }
        for(int l=1;l<=i-1;l++){
            printf("  ");
        }
        for(int k=n;k>=i;k--){
            printf("*");
        }
        printf("\n");  
    }
    for(int i=n;i>=1;i--){
        for(int k=n;k>=i;k--){
            printf("*");
        }
        for(int l=1;l<=i-1;l++){
            printf("  ");
        }
        for(int k=n;k>=i;k--){
            printf("*");
        }
        printf("\n");  
    }
    
}

