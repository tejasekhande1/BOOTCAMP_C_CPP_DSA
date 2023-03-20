#include <stdio.h>
int prefixSum(int arr[],int n,int i){
	if(i >= n){
		return 0;
	}
	arr[i] = arr[i] + arr[i-1];
	return prefixSum(arr,n,i+1);
}

void main(){
	int arr[] = {1,2,3,4,5};
	int n = 5;
	prefixSum(arr,n,1);
	for(int i=0 ; i<n ; i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}
