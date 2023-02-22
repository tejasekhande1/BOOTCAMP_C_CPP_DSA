// LEFT MAX ARRAY

#include <stdio.h>
void leftMax(int arr[],int n){
	int newArr[n];
	newArr[0] = arr[0];
	for(int i=1 ; i<n ; i++){
		if(arr[i] < arr[i-1]){
			arr[i] = arr[i-1];
		}
	}
}

void main(){
	int arr[] = {5,9,1,-4,-2,2,3};
	int n = 7;
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
	leftMax(arr,n);
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}
