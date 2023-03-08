
// PRINT INDEX OF SUBARRAY WHICH HAS A MAXIMUM SUM

#include <stdio.h>

void maxSum(int arr[],int n){
	int s = 0,e = 0;
	int max = arr[0];
	int curSum = 0;
	for(int i=0 ; i<n ; i++){
		curSum += arr[i];
		if(curSum < 0){
			curSum = 0;
			s = i+1;
		}
		if(curSum>max){
			max = curSum;
			e = i;
		}
	}

	printf("Start Index : %d\n",s);
	printf("End Index : %d\n",e);
}

void main(){
	int arr[] = {-2,6,1,1,-2};
	int n = sizeof(arr)/sizeof(int);
	maxSum(arr,n);
}
