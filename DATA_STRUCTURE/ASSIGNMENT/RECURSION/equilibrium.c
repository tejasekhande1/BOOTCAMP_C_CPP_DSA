#include <stdio.h>

int pivotIndex(int arr[],int n,int i){

	if(i >= n){
		return -1;
	}

	if(i == 0){
		if(arr[n-1]-arr[0] == 0) return 0;
	}else{
		if(arr[i] == arr[n-1]-arr[i-1]){
			return i;
		}
	}
	
	return pivotIndex(arr,n,i+1);
	
}

int prefixSum(int arr[],int n,int i){

	if(i >= n){
		return 0;
	}

	arr[i] = arr[i] + arr[i-1];
	return prefixSum(arr,n,i+1);
}

void main(){
	int arr[] = {1,7,3,6,5,6};
	int n = 6;
	prefixSum(arr,n,1);
	int ret = pivotIndex(arr,n,0);
	for(int i=0 ; i<n ; i++){
		printf(" %d ",arr[i]);
	}
	printf("\nPivot Index : %d\n",ret);
}
