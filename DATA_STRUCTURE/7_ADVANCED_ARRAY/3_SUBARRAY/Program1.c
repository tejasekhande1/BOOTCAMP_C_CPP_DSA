
// COUNT OF SUBARRAYS IN GIVEN ARRAY

#include <stdio.h>

int cntSubArray(int arr[],int n){
	return n*(n+1)/2;
}

void main(){
	int arr[] = {4,2,1,3};
	int n = sizeof(arr)/sizeof(int);
	printf("Count of Sub Arrays : %d\n",cntSubArray(arr,n));
}
