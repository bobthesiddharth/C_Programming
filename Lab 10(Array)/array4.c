// Take an user input array and display Max of Values

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
	int max=A[0];
	for(int j=1;j<=n;j++){
		if(A[j]>max){
			max=A[j];
		}
	}
	printf("Max of Array Elements: %d ",max);
}
