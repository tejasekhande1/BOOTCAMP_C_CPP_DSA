// RIGHT MAX ARRAY

#include <stdio.h>
void rightMax(int arr[],int n){
	for(int i=n-2 ; i>=0 ; i--){
		if(arr[i] < arr[i+1]){
			arr[i] = arr[i+1];
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
	rightMax(arr,n);
	for(int i=0 ; i<n ; i++){
		printf("|%d|",arr[i]);
	}
	printf("\n");
}
