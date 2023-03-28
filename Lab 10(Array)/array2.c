// Take an user input array and display it

#include<stdio.h>

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter elements of array");
		scanf("%d",&A[i]);
	}
	printf("Array Elements :");
	for(int j=0;j<n;j++){
		printf("%d ",A[j]);
	}
}
