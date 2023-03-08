// KADANE'S ALGORITHM

#include <stdio.h>

int maxSum(int arr[],int n){
	int max = arr[0];
	int curSum = 0;
	for(int i=0 ; i<n ; i++){
		curSum += arr[i];
		if(curSum < 0){
			curSum = 0;
		}
		if(curSum>max){
			max = curSum;
		}
	}
	return max;
}

void main(){
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int n = sizeof(arr)/sizeof(int);
	printf("Maximum Sum : %d\n",maxSum(arr,n));
}
