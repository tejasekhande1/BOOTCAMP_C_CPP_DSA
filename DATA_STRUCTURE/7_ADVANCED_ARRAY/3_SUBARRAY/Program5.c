
// PRINT SUM OF EVERY SUBARRAY IN AN ARRAY USING PREFIX SUM

#include <stdio.h>

void sumOfSubArray(int arr[],int n){

	for(int i=1 ; i<n ; i++){
		arr[i] = arr[i-1]+arr[i];
	}

	for(int i=0 ; i<n ; i++){
		int sum = 0;
		for(int j=i ; j<n ; j++){
			if(i == 0){
				sum = arr[j];
			}else{
				sum = arr[j]-arr[i-1];
			}
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
