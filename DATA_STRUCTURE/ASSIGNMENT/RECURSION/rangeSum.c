#include <stdio.h>

int row = 2;
int col = 2;
int ret[2];

int rangeSum(int arr[],int q[row][col],int i){

	if(i >= row) return 0;

	int s = q[i][0];
	int e = q[i][1];

	if(s == 0) ret[i] = arr[e];
	else ret[i] = arr[e]-arr[s-1];

	return rangeSum(arr,q,i+1);
}

int prefixSum(int arr[],int n,int i){
	if(i >= n){
		return 0;
	}
	arr[i] = arr[i] + arr[i-1];
	return prefixSum(arr,n,i+1);
}

void main(){
	int arr[] = {1,2,3,4,5};
	int range[][2] = {{0,3},{1,2}};
	int n = 5;
	
	prefixSum(arr,n,1);
	for(int i=0 ; i<n ; i++){
		printf(" %d ",arr[i]);
	}
	printf("\n");

	rangeSum(arr,range,0);	
	for(int i=0 ; i<row ; i++){
		printf(" %d ",ret[i]);
	}

	printf("\n");
}
