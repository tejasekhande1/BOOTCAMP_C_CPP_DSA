
// PRINT SUM OF EVERY SUBARRAY IN AN ARRAY

#include <stdio.h>

void sumOfSubArray(int arr[],int n){
	for(int i=0 ; i<n ; i++){
		int sum = 0;
		for(int j=i ; j<n ; j++){
			sum = sum + arr[j];
			printf("%d\n",sum);
		}
		printf("\n");
	}
}

void main(){
	int arr[] = {4,2,1,3};
	int n = sizeof(arr)/sizeof(int);
	sumOfSubArray(arr,n);
}
