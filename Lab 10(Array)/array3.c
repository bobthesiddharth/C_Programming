// Take an user input array and display sum of Values

#include<stdio.h>

int main(){
	int n,sum=0;
	printf("Enter length of array: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter elements of array");
		scanf("%d",&A[i]);
	}
	
	for(int j=0;j<n;j++){
		sum+=A[j];
	}
	printf("Sum of Array Elements: %d ",sum);
}
