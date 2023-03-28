// Take an user input array and display min of elements

#include<stdio.h>

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		printf("Enter elements of array: ");
		scanf("%d",&A[i]);
	}
	int min=A[0];
	for(int j=1;j<n;j++){
		if(A[j]<min){
			min=A[j];
		}
	}
	printf("Min of Array Elements: %d ",min);
}
