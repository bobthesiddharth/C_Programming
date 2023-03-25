#include<stdio.h>
int main(){
	int rows,cpy,num1 = 0, num2 = 1;
	printf("Enter no of rows ");
	scanf("%d",&rows);
	for(int i = 1; i<=rows;i++){
		printf("%d",num2);
		for(int j = 2; j<=i;j++){
			printf("%d",num1+num2);
			cpy = num2;
			num2 = num1+num2;
			num1 = cpy;
		}
		num1 = 0, num2 = 1;
		printf("\n");
	}
}
